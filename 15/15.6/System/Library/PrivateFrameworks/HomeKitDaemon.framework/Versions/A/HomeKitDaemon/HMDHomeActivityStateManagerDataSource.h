@class HMDHomeAdministratorHandler, NSNotificationCenter, NSDate, HMFMessageDispatcher, NSObject, HMDResidentDevice, NSString, HMCContext, HMDBulletinBoard, HMDHome, HMDLocation, HMFPreferences, HMDBackgroundTaskManager;
@protocol HMDFeaturesDataSource, HMMLogEventSubmitting, OS_dispatch_queue;

@interface HMDHomeActivityStateManagerDataSource : HMFObject <HMDHomeActivityStateManagerDataSource>

@property (readonly, nonatomic) char hasFinishedLoadingHomeData;
@property (readonly, nonatomic) char isCurrentDeviceConfirmedPrimaryResident;
@property (readonly, nonatomic) char isDesignatedFMFDevice;
@property (readonly, nonatomic) char isEligibleForFMFDesignation;
@property (readonly, nonatomic) char isResidentCapable;
@property (readonly, nonatomic) HMDHomeAdministratorHandler *administratorHandler;
@property (readonly, nonatomic) HMDBackgroundTaskManager *backgroundTaskManager;
@property (readonly, nonatomic) HMDBulletinBoard *bulletinBoard;
@property (readonly, copy, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HMDResidentDevice *currentPrimaryResident;
@property (readonly, nonatomic) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly, weak, nonatomic) HMDHome *home;
@property (readonly, nonatomic) HMDLocation *location;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) HMFPreferences *preferences;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) double reportValidityInterval;
@property (readonly, nonatomic) HMCContext *workingStoreContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
