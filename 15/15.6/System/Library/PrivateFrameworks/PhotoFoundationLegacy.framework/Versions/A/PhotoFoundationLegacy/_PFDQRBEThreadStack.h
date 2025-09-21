@class PFDispatchQueue;

@interface _PFDQRBEThreadStack : NSObject {
    _PFDQRBEThreadStack *_next;
    unsigned long long _currentIndex;
    PFDispatchQueue *_activeQueues[8];
}

+ (void)initialize;
+ (id)stackForCurrentThread;

- (void).cxx_destruct;
- (char)isEmpty;
- (char)containsQueue:(id)a0;
- (void)popQueue;
- (void)pushQueue:(id)a0;

@end
