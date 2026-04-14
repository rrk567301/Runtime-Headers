@interface BWCoreAnalyticsReporter : NSObject

+ (id)sharedInstance;
+ (int)clientApplicationIDType:(id)a0;
+ (id)shallowDepthOfFieldEffectStatusToString:(int)a0;
+ (void)initialize;
+ (id)geometricDistortionCorrectionSourceToShortString:(int)a0;

- (void)sendEvent:(id)a0;

@end
