@interface BWCoreAnalyticsReporter : NSObject

+ (id)sharedInstance;
+ (void)initialize;
+ (id)shallowDepthOfFieldEffectStatusToString:(int)a0;
+ (int)clientApplicationIDType:(id)a0;
+ (id)geometricDistortionCorrectionSourceToShortString:(int)a0;

- (void)sendEvent:(id)a0;

@end
