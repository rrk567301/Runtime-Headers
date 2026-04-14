@class NSString, BSEventQueue;

@interface BSEventQueueLock : NSObject {
    BOOL _relinquished;
    BSEventQueue *_eventQueue;
}

@property (readonly, copy, nonatomic) NSString *reason;

- (void)relinquish;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEventQueue:(id)a0 reason:(id)a1;
- (void)dealloc;

@end
