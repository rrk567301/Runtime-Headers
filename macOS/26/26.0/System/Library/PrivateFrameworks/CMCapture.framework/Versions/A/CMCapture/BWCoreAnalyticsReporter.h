@interface BWCoreAnalyticsReporter : NSObject

+ (id)sharedInstance;
+ (id)geometricDistortionCorrectionSourceToShortString:(int)a0;
+ (void)initialize;
+ (id)shallowDepthOfFieldEffectStatusToString:(int)a0;
+ (int)clientApplicationIDType:(id)a0;

- (void)sendEvent:(id)a0;

@end
