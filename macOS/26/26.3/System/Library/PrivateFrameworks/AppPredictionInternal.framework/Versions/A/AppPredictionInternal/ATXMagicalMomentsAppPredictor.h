@class ATXCoreDuetContextHelper, ATXTimeBucketedRateLimiter;

@interface ATXMagicalMomentsAppPredictor : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    ATXTimeBucketedRateLimiter *_rateLimiter;
}

+ (id)sharedInstance;

- (void)trainWithTask:(id)a0;
- (id)init;
- (id)addNowPlayingEventsToAppLaunches:(id)a0;
- (void).cxx_destruct;
- (id)fetchAppLaunchEventsForTraining;
- (id)generateAppLaunchCountedSetFromAppLaunches:(id)a0;

@end
