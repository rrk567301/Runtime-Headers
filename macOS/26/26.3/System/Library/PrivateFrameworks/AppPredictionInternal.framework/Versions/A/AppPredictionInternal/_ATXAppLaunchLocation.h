@class _PASLock, ATXCombinedIntentStream, ATXAppInFocusStream;
@protocol ATXLocationManagerProtocol;

@interface _ATXAppLaunchLocation : NSObject {
    id<ATXLocationManagerProtocol> _locationManager;
    _PASLock *_lock;
    ATXCombinedIntentStream *_combinedIntentStream;
    ATXAppInFocusStream *_appInFocusStream;
}

+ (id)sortTimeIntervals:(id)a0;
+ (id)defaultPath;
+ (void)writeModel:(id)a0;
+ (id)visitsWithLOI:(id)a0 startDate:(id)a1;
+ (void)joinLaunchEvents:(id)a0 withVisits:(id)a1 block:(id /* block */)a2;

- (void)train;
- (void)resetAppIntentLocationData;
- (void)trainWithCallback:(id /* block */)a0;
- (id)init;
- (unsigned long long)loadModel;
- (id)locationManager;
- (int)launchCountAtLOI:(id)a0 bundleId:(id)a1;
- (double)launchProbabilityAtLOI:(id)a0 appForAllIntentsBundleId:(id)a1;
- (void).cxx_destruct;
- (id)initWithAppInFocusStream:(id)a0 combinedIntentStream:(id)a1 locationManager:(id)a2;
- (double)launchProbabilityAtLOI:(id)a0 bundleId:(id)a1;
- (double)launchProbabilityAtLOI:(id)a0 appIntent:(id)a1;
- (void)_trainModelWithLOI:(id)a0 startDate:(id)a1;
- (unsigned long long)loadModelAtPath:(id)a0;

@end
