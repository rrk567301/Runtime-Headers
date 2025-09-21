@class NSURLQueueNode;

@interface NSURLQueue : NSObject {
    unsigned long long count;
    NSURLQueueNode *head;
    NSURLQueueNode *tail;
    id monitor;
    char waitOnTake;
    char _pad1;
    char _pad2;
    char _pad3;
}

+ (id)newNode;

- (void)dealloc;
- (id)init;
- (char)isEmpty;
- (unsigned long long)count;
- (id)peekAt:(unsigned long long)a0;
- (char)remove:(id)a0;
- (void)clear;
- (long long)indexOf:(id)a0;
- (id)peek;
- (void)put:(id)a0;
- (void)setWaitOnTake:(char)a0;
- (id)take;
- (char)waitOnTake;

@end
