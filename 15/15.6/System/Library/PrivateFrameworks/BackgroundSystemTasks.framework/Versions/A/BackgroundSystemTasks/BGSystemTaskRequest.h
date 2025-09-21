@class NSArray, NSString, NSDictionary, NSSet, NSObject;
@protocol OS_nw_parameters, OS_nw_endpoint;

@interface BGSystemTaskRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *featureCodes;
@property (copy, nonatomic) NSString *dataBudgetName;
@property (nonatomic) char beforeApplicationLaunch;
@property (copy, nonatomic) NSString *diskVolume;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *networkEndpointPrimitive;
@property (retain, nonatomic) NSObject<OS_nw_parameters> *networkParametersPrimitive;
@property (nonatomic) char requiresExternalPowerIsSetByUser;
@property (readonly, copy) NSString *identifier;
@property (nonatomic) char requiresNetworkConnectivity;
@property (nonatomic) char requiresExternalPower;
@property (nonatomic) long long priority;
@property (nonatomic) long long requiresProtectionClass;
@property (nonatomic) char preventsDeviceSleep;
@property (nonatomic) double randomInitialDelay;
@property (nonatomic) char postInstall;
@property (nonatomic) char requiresInexpensiveNetworkConnectivity;
@property (nonatomic) char requiresUnconstrainedNetworkConnectivity;
@property (nonatomic) char appRefresh;
@property (nonatomic) char requiresUserInactivity;
@property (nonatomic) char requiresSignificantUserInactivity;
@property (nonatomic) char powerNap;
@property (nonatomic) char resourceIntensive;
@property (nonatomic) long long resources;
@property (nonatomic) char mayRebootDevice;
@property (nonatomic) char userRequestedBackupTask;
@property (nonatomic) long long networkDownloadSize;
@property (nonatomic) long long networkUploadSize;
@property (nonatomic) char communicatesWithPairedDevice;
@property (nonatomic) char shouldWakeDevice;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) unsigned long long groupConcurrencyLimit;
@property (copy, nonatomic) NSString *rateLimitConfigurationName;
@property (nonatomic) double expectedDuration;
@property (nonatomic) char powerBudgeted;
@property (nonatomic) char dataBudgeted;
@property (copy, nonatomic) NSArray *relatedApplications;
@property (nonatomic) long long applicationRelationship;
@property (copy, nonatomic) NSArray *involvedProcesses;
@property (nonatomic) char runOnAppForeground;
@property (nonatomic) char requestsApplicationLaunch;
@property (nonatomic) char requiresBuddyComplete;
@property (nonatomic) long long targetDevice;
@property (copy, nonatomic) NSString *remoteDevice;
@property (nonatomic) char requiresRemoteDeviceWake;
@property (copy, nonatomic) NSDictionary *networkEndpoint;
@property (copy, nonatomic) NSDictionary *networkParameters;
@property (nonatomic) long long runOnMotionState;
@property (copy, nonatomic) NSSet *producedResultIdentifiers;
@property (copy, nonatomic) NSSet *dependencies;
@property (nonatomic) char overrideRateLimiting;
@property (nonatomic) char magneticInterferenceSensitivity;
@property (nonatomic) char mailFetch;
@property (nonatomic) char bypassBatteryAging;
@property (nonatomic) char bypassPeakPower;
@property (nonatomic) char backlogged;
@property (nonatomic) unsigned long long requiresMinimumBatteryLevel;
@property (nonatomic) unsigned long long requiresMinimumDataBudgetPercentage;
@property (nonatomic) char blockRebootActivitiesForSU;
@property (nonatomic) char useStatisticalModelForTriggersRestart;

+ (void)initialize;
+ (id)descriptorWithTaskRequest:(id)a0;
+ (id)taskRequestWithDescriptor:(id)a0 withIdentifier:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
