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
+ (void)setupWithConfigurationAtURL:(id)a0;
+ (void)setupSystemPropertyProvidersForLibrary:(id)a0;
+ (void)updateWithConfiguration:(id)a0;
+ (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (void)releasePhotoLibrary;
+ (id)bucketNameForInteger:(long long)a0 bucketLimits:(long long)a1;
+ (long long)startSignpost;
+ (id)creationDateForSignpost:(long long)a0;
+ (id)bucketNameForDouble:(double)a0 bucketLimits:(id)a1 numberFormatter:(id)a2;
+ (void)startViewTracking;
+ (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (void)removeDestination:(id)a0;
+ (void)addDestination:(id)a0;
+ (id)systemPropertyForKey:(id)a0;
+ (void)startAppTracking;
+ (void)sendEvent:(id)a0 withPayload:(id)a1;
+ (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
+ (void)activateEventQueue;

- (void)setupWithConfigurationAtURL:(id)a0;
- (void)setupSystemPropertyProvidersForLibrary:(id)a0;
- (void)updateWithConfiguration:(id)a0;
- (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (void)releasePhotoLibrary;
- (long long)startSignpost;
- (void).cxx_destruct;
- (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (long long)generateNextSignpostID;
- (void)removeDestination:(id)a0;
- (id)init;
- (void)addDestination:(id)a0;
- (void)_setupSystemPropertyProviders;
- (void)sendEvent:(id)a0 withPayload:(id)a1;
- (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
- (void)activateEventQueue;

@end
