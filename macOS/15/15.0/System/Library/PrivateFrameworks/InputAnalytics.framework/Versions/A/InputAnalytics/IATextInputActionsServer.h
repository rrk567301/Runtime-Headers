@class NSMutableOrderedSet, IASTextInputActionsAnalyzer, NSObject;
@protocol OS_dispatch_queue, IASServerAnalyticsDelegate;

@interface IATextInputActionsServer : NSObject

@property (retain, nonatomic) IASTextInputActionsAnalyzer *analyzer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableOrderedSet *recentActions;
@property (weak, nonatomic) id<IASServerAnalyticsDelegate> serverDelegate;

- (void).cxx_destruct;
- (void)setKeyboardTrialParameters:(id)a0;
- (id)initWithEventHandler:(id /* block */)a0;
- (void)q_flushRecentActions;
- (void)consumeAction:(id)a0;
- (void)dispatchEventToCoreAnalytics;
- (void)enumerateTextInputActionsAnalytics;

@end
