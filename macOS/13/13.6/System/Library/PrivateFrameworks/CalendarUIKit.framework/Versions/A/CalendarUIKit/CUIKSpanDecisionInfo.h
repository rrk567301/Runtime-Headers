@interface CUIKSpanDecisionInfo : NSObject

@property (nonatomic) BOOL shouldRequestSpan;
@property (nonatomic) BOOL proposeFuture;
@property (nonatomic) long long recurringEventCount;

+ (BOOL)_allowSlicingEvent:(id)a0 diffSummary:(id)a1;
+ (BOOL)_shouldRequestForSpanWithDiffSummary:(id)a0 recurringEventCount:(long long)a1 significantlyDetachedRecurringEventCount:(long long)a2;
+ (id)spanDecisionInfoForEvents:(id)a0 diffSummary:(id)a1;

@end
