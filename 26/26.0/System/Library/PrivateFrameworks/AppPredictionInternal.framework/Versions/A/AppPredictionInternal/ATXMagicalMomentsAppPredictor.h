@class ATXCoreDuetContextHelper, ATXTimeBucketedRateLimiter;

@interface ATXMagicalMomentsAppPredictor : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    ATXTimeBucketedRateLimiter *_rateLimiter;
}

+ (id)sharedInstance;

- (id)generateAppLaunchCountedSetFromAppLaunches:(id)a0;
- (id)fetchAppLaunchEventsForTraining;
- (id)init;
- (id)addNowPlayingEventsToAppLaunches:(id)a0;
- (void)trainWithTask:(id)a0;
- (void).cxx_destruct;

@end
