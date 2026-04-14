@class HMDAppleAccountManager, HMFPreferences, NSString, NSBackgroundActivityScheduler, HMDProcessMonitor, NSObject, NSNotificationCenter, HMDHome;
@protocol OS_dispatch_queue, HMDFeaturesDataSource, HMFTimerProvider;

@interface HMDResidentStatusChannelManagerDefaultDataSource : NSObject <HMDResidentStatusChannelManagerDataSource>

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, weak, nonatomic) HMDHome *home;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<HMFTimerProvider> timerProvider;
@property (readonly) HMDProcessMonitor *processMonitor;
@property (readonly) HMDAppleAccountManager *appleAccountManager;
@property (readonly) HMFPreferences *preferences;
@property (readonly) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly) NSBackgroundActivityScheduler *commonToDedicatedTopicMigrationScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createChannelOnCommonTopic;
- (id)createChannelOnDedicatedTopic;
- (id)initWithHome:(id)a0 queue:(id)a1;
- (id)minimumHomeKitVersionForChannelMigration;

@end
