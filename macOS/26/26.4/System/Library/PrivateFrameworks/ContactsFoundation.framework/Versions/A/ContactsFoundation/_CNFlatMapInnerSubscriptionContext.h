@class CNSuspendableSchedulerDecorator;
@protocol CNCancelable;

@interface _CNFlatMapInnerSubscriptionContext : NSObject

@property (readonly) CNSuspendableSchedulerDecorator *decorator;
@property (readonly) id<CNCancelable> token;

- (id)initWithDecorator:(id)a0 token:(id)a1;
- (void).cxx_destruct;

@end
