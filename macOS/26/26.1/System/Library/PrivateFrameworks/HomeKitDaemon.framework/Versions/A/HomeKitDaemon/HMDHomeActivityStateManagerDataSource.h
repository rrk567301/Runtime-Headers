@class HMDHomeAdministratorHandler, NSNotificationCenter, NSDate, HMFMessageDispatcher, NSObject, HMDResidentDevice, NSString, HMDUser, HMCContext, HMDBulletinBoard, HMDHome, HMDLocation, HMFPreferences, HMDBackgroundTaskManager;
@protocol HMFLogging, HMDFeaturesDataSource, HMMLogEventSubmitting, OS_dispatch_queue;

@interface HMDHomeActivityStateManagerDataSource : HMFObject <HMDHomeActivityStateManagerDataSource>

@property (readonly, nonatomic) BOOL hasFinishedLoadingHomeData;
@property (readonly, nonatomic) BOOL isCurrentDeviceConfirmedPrimaryResident;
@property (readonly, nonatomic) BOOL isDesignatedFMFDevice;
@property (readonly, nonatomic) BOOL isEligibleForFMFDesignation;
@property (readonly, nonatomic) BOOL isResidentCapable;
@property (readonly, nonatomic) HMDHomeAdministratorHandler *administratorHandler;
@property (readonly, nonatomic) HMDBackgroundTaskManager *backgroundTaskManager;
@property (readonly, nonatomic) HMDBulletinBoard *bulletinBoard;
@property (readonly, copy, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HMDResidentDevice *currentPrimaryResident;
@property (readonly, nonatomic) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly, weak, nonatomic) HMDHome *home;
@property (readonly, nonatomic) HMDUser *currentUser;
@property (readonly, nonatomic) HMDLocation *location;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) HMFPreferences *preferences;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) double reportValidityInterval;
@property (readonly, nonatomic) HMCContext *workingStoreContext;
@property (readonly, nonatomic) id<HMFLogging> loggerWithTTL;
@property (readonly, nonatomic) BOOL supportsAdaptiveTemperatureAutomations;
@property (readonly, nonatomic, getter=isHomeAppHomeActivityStateIndicatorInternalSettingEnabled) BOOL homeAppHomeActivityStateIndicatorInternalSettingEnabled;
@property (readonly, nonatomic) BOOL supportsUserActivityVacationStateDetector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)timerWithTimeInterval:(double)a0 options:(unsigned int)a1;
- (id)createHomeActivityStateAggregatorManagerWithInitialStateHoldDetails:(id)a0;
- (id)createPresenceFeeder;
- (id)makeHomeActivityComingHomeAggregator;
- (id)makeHomeActivityHomeAwayAggregator;
- (id)makeHomeActivityStateAggregatorManagerStorage;
- (id)makeHomeActivityStateMachineWithAggregators:(id)a0 initialStateHoldDetails:(id)a1;
- (id)makeHomeActivityStateManagerStorage;
- (id)makeHomeActivityVacationAggregator;
- (id)makeUserActivityHomeAwayStateDetector;
- (id)makeUserActivityReportCoordinator;
- (id)makeUserActivityVacationStateDetector;

@end
