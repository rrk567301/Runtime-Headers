@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, CXTransactionManagerDelegate;

@interface CXTransactionManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *outstandingTransactionGroups;
@property (weak, nonatomic) id<CXTransactionManagerDelegate> delegate;

- (void)failOutstandingActionsForCallWithUUID:(id)a0;
- (void)addOutstandingTransactionGroup:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)failOutstandingActionsForChannelWithUUID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_timeoutReachedForAction:(id)a0 callSource:(id)a1;
- (id)description;
- (void)_setUpTimeoutForActionIfNecessary:(id)a0 callSource:(id)a1;
- (void)updateWithCompletedAction:(id)a0;

@end
