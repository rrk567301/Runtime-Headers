@class CKVQueueNode;

@interface CKVQueue : NSObject {
    CKVQueueNode *_firstNode;
    CKVQueueNode *_lastNode;
}

- (id)init;
- (void).cxx_destruct;
- (void)enqueue:(id)a0;
- (id)dequeue;

@end
