@class NSString, BSEventQueue;

@interface BSEventQueueLock : NSObject {
    BOOL _relinquished;
    BSEventQueue *_eventQueue;
}

@property (readonly, copy, nonatomic) NSString *reason;

- (void)relinquish;
- (void)dealloc;
- (id)initWithEventQueue:(id)a0 reason:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
