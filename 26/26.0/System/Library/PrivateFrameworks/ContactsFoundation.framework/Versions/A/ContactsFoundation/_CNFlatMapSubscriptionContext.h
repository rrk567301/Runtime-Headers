@class CNQueue, CNWeakArray;
@protocol CNScheduler;

@interface _CNFlatMapSubscriptionContext : NSObject

@property (readonly) CNQueue *decorators;
@property (readonly) CNWeakArray *tokens;
@property (readonly) id<CNScheduler> downstream;
@property (readonly) id<CNScheduler> resourceLock;
@property (getter=isOperatorReceiving) BOOL operatorReceiving;
@property (getter=isObserverReceiving) BOOL observerReceiving;

- (id)initWithSchedulerProvider:(id)a0;
- (void).cxx_destruct;

@end
