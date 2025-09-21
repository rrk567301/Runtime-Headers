@interface MUICatchUpFeedbackController : NSObject

+ (void)provideHighlightsFeedbackWithType:(long long)a0 message:(id)a1 sourceViewController:(id)a2;
+ (char)isFeedbackRestricted;
+ (void)provideAutomaticSummaryFeedbackWithType:(long long)a0 message:(id)a1 sourceViewController:(id)a2;

- (id)init;

@end
