@class NSObject, CPAnalyticsSystemProperties, PHPhotoLibrary, CPAnalyticsDestinationsRegistry, NSDate;
@protocol OS_dispatch_queue;

@interface CPAnalytics : NSObject {
    long long _signpostUniqueValue;
    unsigned long long _pauseTokenIDs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pauseTokenLock;
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
+ (void)addDestination:(id)a0;
+ (void)_endPausingEventProcessingForTokenIdentifier:(long long)a0;
+ (void)activateEventQueue;
+ (id)bucketNameForDouble:(double)a0 bucketLimits:(id)a1 numberFormatter:(id)a2;
+ (id)bucketNameForInteger:(long long)a0 bucketLimits:(long long)a1;
+ (id)creationDateForSignpost:(long long)a0;
+ (void)endPausingEventProcessingForToken:(id)a0;
+ (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
+ (id)pauseEventProcessingWithReason:(id)a0 timeout:(double)a1;
+ (void)releasePhotoLibrary;
+ (void)removeDestination:(id)a0;
+ (void)sendEvent:(id)a0 withPayload:(id)a1;
+ (void)setupSystemPropertyProvidersForLibrary:(id)a0;
+ (void)setupWithConfigurationAtURL:(id)a0;
+ (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (void)startAppTracking;
+ (long long)startSignpost;
+ (void)startViewTracking;
+ (id)systemPropertyForKey:(id)a0;
+ (void)updateWithConfiguration:(id)a0;
+ (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)addDestination:(id)a0;
- (unsigned long long)_checkOutPauseTokenID;
- (BOOL)_endPausingEventProcessingForTokenIdentifier:(long long)a0;
- (void)_setupSystemPropertyProviders;
- (void)activateEventQueue;
- (void)endPausingEventProcessingForToken:(id)a0;
- (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
- (long long)generateNextSignpostID;
- (id)pauseEventProcessingWithReason:(id)a0 timeout:(double)a1;
- (void)releasePhotoLibrary;
- (void)removeDestination:(id)a0;
- (void)sendEvent:(id)a0 withPayload:(id)a1;
- (void)setupSystemPropertyProvidersForLibrary:(id)a0;
- (void)setupWithConfigurationAtURL:(id)a0;
- (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (long long)startSignpost;
- (void)updateWithConfiguration:(id)a0;
- (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;

@end
