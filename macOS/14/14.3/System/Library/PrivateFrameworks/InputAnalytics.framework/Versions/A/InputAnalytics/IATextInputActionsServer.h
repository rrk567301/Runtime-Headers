@class NSMutableOrderedSet, IATextInputActionsAccumulator, NSObject;
@protocol OS_dispatch_queue, IAServerAnalyticsDelegate;

@interface IATextInputActionsServer : NSObject

@property (retain, nonatomic) IATextInputActionsAccumulator *accumulator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableOrderedSet *recentActions;
@property (weak, nonatomic) id<IAServerAnalyticsDelegate> serverDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)enumerateTextInputActionsAnalytics:(id /* block */)a0;
- (void)q_flushRecentActions;
- (id)initWithEventHandler:(id /* block */)a0;
- (void)consumeAction:(id)a0;
- (void)dispatchEventToCoreAnalytics;

@end
