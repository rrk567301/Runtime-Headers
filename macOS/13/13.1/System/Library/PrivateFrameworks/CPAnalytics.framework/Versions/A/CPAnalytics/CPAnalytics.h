@class CPAnalyticsSystemProperties, PHPhotoLibrary, CPAnalyticsDestinationsRegistry, NSObject;
@protocol OS_dispatch_queue;

@interface CPAnalytics : NSObject {
    long long _signpostUniqueValue;
}

@property (class, readonly, nonatomic) BOOL isAllowed;

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) CPAnalyticsDestinationsRegistry *registry;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventsQueue;
@property (readonly, nonatomic) CPAnalyticsSystemProperties *systemProperties;

+ (id)sharedInstance;
+ (void)addDestination:(id)a0;
+ (void)removeDestination:(id)a0;
+ (void)setupWithConfigurationAtURL:(id)a0;
+ (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (void)setupSystemPropertyProvidersForLibrary:(id)a0;
+ (void)releasePhotoLibrary;
+ (void)sendEvent:(id)a0 withPayload:(id)a1;
+ (long long)startSignpost;
+ (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
+ (void)startViewTracking;
+ (void)startAppTracking;
+ (void)activateEventQueue;
+ (id)bucketNameForInteger:(long long)a0 bucketLimits:(long long)a1;
+ (id)bucketNameForDouble:(double)a0 bucketLimits:(id)a1 numberFormatter:(id)a2;
+ (id)systemPropertyForKey:(id)a0;
+ (id)creationDateForSignpost:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addDestination:(id)a0;
- (void)removeDestination:(id)a0;
- (void)setupWithConfigurationAtURL:(id)a0;
- (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (void)setupSystemPropertyProvidersForLibrary:(id)a0;
- (void)releasePhotoLibrary;
- (void)sendEvent:(id)a0 withPayload:(id)a1;
- (long long)startSignpost;
- (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
- (void)activateEventQueue;
- (void)_setupSystemPropertyProviders;
- (long long)generateNextSignpostID;

@end
