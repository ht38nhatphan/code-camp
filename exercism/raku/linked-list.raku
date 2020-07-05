# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/GfxBTu3TJWc
# Blog URL for this problem: https://yanzhan.site/exercism/raku/linked-list.html .

unit class LinkedList;

class Node {
    has Node $.pre is rw = Nil;
    has Node $.next is rw = Nil;
    has Int $.data;
}

has Node $.head = Nil;
has Node $.tail = Nil;

method push-list($num) {
    my $node = Node.new(data => $num);
    if !$!head {
        $!head = $node;
        $!tail = $node;
    } else {
        $node.pre = $!tail;
        $!tail.next = $node;
        $!tail = $node;
    }
}

method pop-list() {
    my $num = $!tail.data;
    if $!tail.pre {
        my $pre = $!tail.pre;
        $pre.next = Nil;
        $!tail.pre = Nil;
        $!tail = $pre;
    } else {
        $!head = Nil;
        $!tail = Nil;
    }
    return $num;
}

method unshift-list($num) {
    my $node = Node.new(data => $num);
    if !$!head {
        $!head = $node;
        $!tail = $node;
    } else {
        $node.next = $!head;
        $!head.pre = $node;
        $!head = $node;
    }
}

method shift-list() {
    my $num = $!head.data;
    if $!head.next {
        my $next = $!head.next;
        $next.pre = Nil;
        $!head.next = Nil;
        $!head = $next;
    } else {
        $!head = Nil;
        $!tail = Nil;
    }
    return $num;
}
