@interface CUIKSpanDecisionInfo : NSObject

@property (nonatomic) char shouldRequestSpan;
@property (nonatomic) char proposeFuture;
@property (nonatomic) long long recurringEventCount;

+ (char)_allowSlicingEvent:(id)a0;
+ (id)spanDecisionInfoForEvents:(id)a0;

@end
