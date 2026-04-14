@class _AXFStackNode;

@interface _AXFStackQueueEnumerator : NSEnumerator {
    _AXFStackNode *_currentListMember;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithListMember:(id)a0;

@end
