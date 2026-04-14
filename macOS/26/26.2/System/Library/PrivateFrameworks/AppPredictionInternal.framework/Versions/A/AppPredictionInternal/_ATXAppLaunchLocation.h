@class _PASLock, ATXCombinedIntentStream, ATXAppInFocusStream;
@protocol ATXLocationManagerProtocol;

@interface _ATXAppLaunchLocation : NSObject {
    id<ATXLocationManagerProtocol> _locationManager;
    _PASLock *_lock;
    ATXCombinedIntentStream *_combinedIntentStream;
    ATXAppInFocusStream *_appInFocusStream;
}

+ (void)joinLaunchEvents:(id)a0 withVisits:(id)a1 block:(id /* block */)a2;
+ (id)sortTimeIntervals:(id)a0;
+ (id)visitsWithLOI:(id)a0 startDate:(id)a1;
+ (void)writeModel:(id)a0;
+ (id)defaultPath;

- (void)train;
- (double)launchProbabilityAtLOI:(id)a0 bundleId:(id)a1;
- (double)launchProbabilityAtLOI:(id)a0 appIntent:(id)a1;
- (void)trainWithCallback:(id /* block */)a0;
- (int)launchCountAtLOI:(id)a0 bundleId:(id)a1;
- (unsigned long long)loadModelAtPath:(id)a0;
- (id)locationManager;
- (id)initWithAppInFocusStream:(id)a0 combinedIntentStream:(id)a1 locationManager:(id)a2;
- (double)launchProbabilityAtLOI:(id)a0 appForAllIntentsBundleId:(id)a1;
- (unsigned long long)loadModel;
- (void).cxx_destruct;
- (void)_trainModelWithLOI:(id)a0 startDate:(id)a1;
- (void)resetAppIntentLocationData;
- (id)init;

@end
