@class CNQueue, CNWeakArray;
@protocol CNScheduler;

@interface _CNFlatMapSubscriptionContext : NSObject

@property (readonly) CNQueue *decorators;
@property (readonly) CNWeakArray *tokens;
@property (readonly) id<CNScheduler> downstream;
@property (readonly) id<CNScheduler> resourceLock;
@property (getter=isOperatorReceiving) char operatorReceiving;
@property (getter=isObserverReceiving) char observerReceiving;

- (void).cxx_destruct;
- (id)initWithSchedulerProvider:(id)a0;

@end
