@class NSObject, CPAnalyticsSystemProperties, PHPhotoLibrary, CPAnalyticsDestinationsRegistry, NSDate;
@protocol OS_dispatch_queue;

@interface CPAnalytics : NSObject {
    long long _signpostUniqueValue;
}

@property (class, readonly) NSDate *currentDate;
@property (class, readonly) double timeIntervalBetweenReferenceDateAndCurrentDate;
@property (class, retain) NSDate *mockCurrentDate;
@property (class, readonly, nonatomic) BOOL isAllowed;

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) CPAnalyticsDestinationsRegistry *registry;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventsQueue;
@property (readonly, nonatomic) CPAnalyticsSystemProperties *systemProperties;

+ (id)sharedInstance;
+ (id)systemPropertyForKey:(id)a0;
+ (id)bucketNameForInteger:(long long)a0 bucketLimits:(long long)a1;
+ (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
+ (void)addDestination:(id)a0;
+ (void)sendEvent:(id)a0 withPayload:(id)a1;
+ (long long)startSignpost;
+ (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (void)removeDestination:(id)a0;
+ (void)startViewTracking;
+ (void)updateWithConfiguration:(id)a0;
+ (void)activateEventQueue;
+ (id)creationDateForSignpost:(long long)a0;
+ (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (id)bucketNameForDouble:(double)a0 bucketLimits:(id)a1 numberFormatter:(id)a2;
+ (void)setupWithConfigurationAtURL:(id)a0;
+ (void)startAppTracking;
+ (void)setupSystemPropertyProvidersForLibrary:(id)a0;
+ (void)releasePhotoLibrary;

- (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
- (void)addDestination:(id)a0;
- (void)sendEvent:(id)a0 withPayload:(id)a1;
- (long long)generateNextSignpostID;
- (long long)startSignpost;
- (id)init;
- (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (void)removeDestination:(id)a0;
- (void)updateWithConfiguration:(id)a0;
- (void)activateEventQueue;
- (void).cxx_destruct;
- (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (void)_setupSystemPropertyProviders;
- (void)setupWithConfigurationAtURL:(id)a0;
- (void)setupSystemPropertyProvidersForLibrary:(id)a0;
- (void)releasePhotoLibrary;

@end
