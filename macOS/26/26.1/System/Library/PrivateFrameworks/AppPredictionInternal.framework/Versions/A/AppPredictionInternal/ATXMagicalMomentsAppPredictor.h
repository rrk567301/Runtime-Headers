@class ATXCoreDuetContextHelper, ATXTimeBucketedRateLimiter;

@interface ATXMagicalMomentsAppPredictor : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    ATXTimeBucketedRateLimiter *_rateLimiter;
}

+ (id)sharedInstance;

- (id)generateAppLaunchCountedSetFromAppLaunches:(id)a0;
- (id)fetchAppLaunchEventsForTraining;
- (void).cxx_destruct;
- (id)addNowPlayingEventsToAppLaunches:(id)a0;
- (void)trainWithTask:(id)a0;
- (id)init;

@end
