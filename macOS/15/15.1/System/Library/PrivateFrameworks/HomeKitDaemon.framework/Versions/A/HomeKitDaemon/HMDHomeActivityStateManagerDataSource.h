@class NSDate, NSString, HMFPreferences, HMDLocation, HMDBulletinBoard, HMDBackgroundTaskManager, HMFMessageDispatcher, HMDHomeAdministratorHandler, NSObject, HMCContext, NSNotificationCenter, HMDHome;
@protocol OS_dispatch_queue, HMDFeaturesDataSource, HMMLogEventSubmitting;

@interface HMDHomeActivityStateManagerDataSource : HMFObject <HMDHomeActivityStateManagerDataSource>

@property (readonly, nonatomic) BOOL isEligibleForFMFDesignation;
@property (readonly, nonatomic) BOOL isDesignatedFMFDevice;
@property (readonly, nonatomic) BOOL isResidentCapable;
@property (readonly, nonatomic) BOOL hasFinishedLoadingHomeData;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) HMDHome *home;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly, copy, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) HMDHomeAdministratorHandler *administratorHandler;
@property (readonly, nonatomic) HMDBackgroundTaskManager *backgroundTaskManager;
@property (readonly, nonatomic) HMDBulletinBoard *bulletinBoard;
@property (readonly, nonatomic) BOOL isCurrentDeviceConfirmedPrimaryResident;
@property (readonly, nonatomic) HMFPreferences *preferences;
@property (readonly, nonatomic) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly, nonatomic) HMCContext *workingStoreContext;
@property (readonly, nonatomic) HMDLocation *location;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)timerWithTimeInterval:(double)a0 options:(unsigned long long)a1;
- (id)initWithHome:(id)a0;

@end
