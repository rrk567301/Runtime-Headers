@class NSObject;
@protocol OS_dispatch_queue;

@interface BWCoreAnalyticsReporter : NSObject {
    NSObject<OS_dispatch_queue> *_coreAnalyticsDispatchQueue;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (int)clientApplicationIDType:(id)a0;
+ (id)geometricDistortionCorrectionSourceToShortString:(int)a0;
+ (id)shallowDepthOfFieldEffectStatusToString:(int)a0;

- (void)dealloc;
- (id)init;
- (void)sendEvent:(id)a0;

@end
