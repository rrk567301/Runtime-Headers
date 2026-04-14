@class NSString, NSArray, NSDictionary;

@interface BGSystemTaskRequest : NSObject <NSCopying>

@property (readonly, copy) NSString *identifier;
@property (nonatomic) BOOL requiresNetworkConnectivity;
@property (nonatomic) BOOL requiresExternalPower;
@property (nonatomic) long long priority;
@property (nonatomic) long long requiresProtectionClass;
@property (nonatomic) BOOL preventsDeviceSleep;
@property (nonatomic) double randomInitialDelay;
@property (nonatomic) BOOL postInstall;
@property (nonatomic) BOOL requiresInexpensiveNetworkConnectivity;
@property (nonatomic) BOOL appRefresh;
@property (nonatomic) BOOL requiresUserInactivity;
@property (nonatomic) BOOL requiresSignificantUserInactivity;
@property (nonatomic) BOOL powerNap;
@property (nonatomic) BOOL resourceIntensive;
@property (nonatomic) BOOL mayRebootDevice;
@property (nonatomic) BOOL userRequestedBackupTask;
@property (nonatomic) long long networkDownloadSize;
@property (nonatomic) long long networkUploadSize;
@property (nonatomic) BOOL communicatesWithPairedDevice;
@property (nonatomic) BOOL shouldWakeDevice;
@property (retain, nonatomic) NSString *groupName;
@property (nonatomic) unsigned long long groupConcurrencyLimit;
@property (nonatomic) double expectedDuration;
@property (nonatomic) BOOL powerBudgeted;
@property (nonatomic) BOOL dataBudgeted;
@property (retain, nonatomic) NSArray *relatedApplications;
@property (retain, nonatomic) NSArray *involvedProcesses;
@property (nonatomic) BOOL runOnAppForeground;
@property (nonatomic) BOOL requiresBuddyComplete;
@property (retain, nonatomic) NSDictionary *networkEndpoint;
@property (retain, nonatomic) NSDictionary *networkParameters;
@property (nonatomic) long long runOnMotionState;
@property (nonatomic) BOOL overrideRateLimiting;
@property (nonatomic) BOOL magneticInterferenceSensitivity;
@property (nonatomic) BOOL mailFetch;
@property (nonatomic) BOOL bypassBatteryAging;
@property (nonatomic) BOOL bypassPeakPower;
@property (nonatomic) BOOL backlogged;
@property (nonatomic) unsigned long long requiresMinimumBatteryLevel;
@property (nonatomic) unsigned long long requiresMinimumDataBudgetPercentage;

+ (void)initialize;
+ (id)taskRequestWithDescriptor:(id)a0 withIdentifier:(id)a1;
+ (id)descriptorWithTaskRequest:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
