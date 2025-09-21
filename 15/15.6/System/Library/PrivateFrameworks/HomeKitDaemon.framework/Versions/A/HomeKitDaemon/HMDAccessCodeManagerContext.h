@class NSUUID, NSString, HMDAccessCodeDemoDataMocker, NSArray, HMDBulletinBoard, HMDRemoteMessageForwarder, HMFMessageDispatcher, HMDHomeAdministratorHandler, NSObject, HMDDevice, NSNotificationCenter, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDAccessCodeManagerContext : NSObject <HMFLogging, HMDAccessCodeManagerContext>

@property (readonly) HMDAccessCodeDemoDataMocker *demoDataMocker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) HMDHome *home;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSUUID *UUID;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDHomeAdministratorHandler *administratorHandler;
@property (readonly, getter=isFeatureEnabled) char featureEnabled;
@property (readonly, getter=isCurrentDevicePrimaryResident) char currentDevicePrimaryResident;
@property (readonly) char primaryResidentSupportsAccessCodes;
@property (readonly, getter=isDemoDataMockerEnabled) char demoDataMockerEnabled;
@property (readonly) long long accessoryReadWriteRetries;
@property (readonly) double accessoryReadWriteRetryTimeInterval;
@property (readonly) double removedUserAccessCodeTimeToLive;
@property (readonly) double dataCleanUpCheckTimerInterval;
@property (readonly) long long residentDataSyncVerificationRetries;
@property (readonly) double residentDataSyncVerificationRetryTimeInterval;
@property (readonly, getter=isCurrentDeviceResidentCapable) char currentDeviceResidentCapable;
@property (readonly, getter=isCurrentDeviceOwnerUser) char currentDeviceOwnerUser;
@property (readonly, getter=isCurrentDeviceOwnerController) char currentDeviceOwnerController;
@property (readonly, getter=isCurrentDeviceWatch) char currentDeviceWatch;
@property (readonly, getter=isResidentSupported) char residentSupported;
@property (readonly, getter=isHomeAppForegrounded) char homeAppForegrounded;
@property (readonly, getter=hasHomeOnboardedForAccessCodes) char homeOnboardedForAccessCodes;
@property (readonly) HMDDevice *residentCommunicationHandlerPreferredDevice;
@property (readonly) NSArray *accessoriesSupportingAccessCodes;
@property (readonly) NSArray *UUIDsOfAccessoriesSupportingAccessCodes;
@property (readonly) NSArray *UUIDsOfMatterAccessoriesSupportingAccessCodes;
@property (readonly) NSArray *UUIDsOfHAPAccessoriesSupportingAccessCodes;
@property (readonly) HMDBulletinBoard *bulletinBoard;
@property (readonly) HMDRemoteMessageForwarder *remoteMessageForwarder;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)generateAccessCodeValueFromConstraints:(id)a0 accessoryAccessCodes:(id)a1 homeAccessCodes:(id)a2;
- (id)userWithUUID:(id)a0;
- (id)userForMessage:(id)a0;
- (void)configureWithMessageDispatcher:(id)a0;
- (id)_performMockedReadRequests:(id)a0;
- (id)_performMockedWriteRequests:(id)a0;
- (id)hapAccessoryWithUUID:(id)a0;
- (id)initWithHome:(id)a0 workQueue:(id)a1;
- (id)initWithHome:(id)a0 workQueue:(id)a1 UUID:(id)a2;
- (id)performReadRequests:(id)a0 withRetries:(long long)a1 timeInterval:(double)a2 loggingObject:(id)a3;
- (id)performWriteRequests:(id)a0 withRetries:(long long)a1 timeInterval:(double)a2 loggingObject:(id)a3;
- (void)redispatchToResidentMessage:(id)a0;
- (id)uuidsOfAccessoriesSupportingAccessCodesForUser:(id)a0;

@end
