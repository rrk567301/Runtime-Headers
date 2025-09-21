@class NSMutableArray;
@protocol ATXPETEventTracker2Protocol;

@interface ATXHeroAppSingleSuggestionLogger : NSObject

@property (retain, nonatomic) id<ATXPETEventTracker2Protocol> tracker;
@property (retain, nonatomic) NSMutableArray *positiveEventBuffer;
@property (retain, nonatomic) NSMutableArray *negativeEventBuffer;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTracker:(id)a0;
- (void)_flushEventBuffer:(id)a0 numEventsToSample:(long long)a1 isNegative:(char)a2;
- (id)_heroAppEngagementMetricWithBundleId:(id)a0 interactionType:(int)a1 consumerSubType:(id)a2;
- (void)_logHeroAppEngagementMetric:(id)a0;
- (void)flushEventBuffers;
- (void)handleSingleSuggestion:(id)a0;

@end
