@class NSString, BSEventQueue;

@interface BSEventQueueLock : NSObject {
    BOOL _relinquished;
    BSEventQueue *_eventQueue;
}

@property (readonly, copy, nonatomic) NSString *reason;

- (void)relinquish;
- (id)description;
- (id)initWithEventQueue:(id)a0 reason:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
