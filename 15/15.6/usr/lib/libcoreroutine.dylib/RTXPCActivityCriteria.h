@class NSNumber, NSMutableDictionary;

@interface RTXPCActivityCriteria : NSObject

@property (retain, nonatomic) NSMutableDictionary *additionalCriteria;
@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double gracePeriod;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) char requireNetworkConnectivity;
@property (readonly, nonatomic) char requireInexpensiveNetworkConnectivity;
@property (readonly, nonatomic) unsigned long long networkTransferDirection;
@property (readonly, nonatomic) char allowBattery;
@property (readonly, nonatomic) char powerNap;
@property (readonly, nonatomic) unsigned long long networkTransferUploadSize;
@property (readonly, nonatomic) unsigned long long networkTransferDownloadSize;
@property (readonly, nonatomic) NSNumber *requireBatteryLevel;
@property (nonatomic) double expectedDuration;
@property (nonatomic) char cpuIntensive;
@property (nonatomic) char userRequestedBackgroundTask;
@property (nonatomic) char postInstall;
@property (nonatomic) char requiresBuddyComplete;

+ (const char *)convertNetworkTransferDirection:(unsigned long long)a0;
+ (const char *)convertPriority:(unsigned long long)a0;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInterval:(double)a0 gracePeriod:(double)a1 priority:(unsigned long long)a2 requireNetworkConnectivity:(char)a3 requireInexpensiveNetworkConnectivity:(char)a4 networkTransferDirection:(unsigned long long)a5 allowBattery:(char)a6 powerNap:(char)a7;
- (id)initWithInterval:(double)a0 gracePeriod:(double)a1 priority:(unsigned long long)a2 requireNetworkConnectivity:(char)a3 requireInexpensiveNetworkConnectivity:(char)a4 networkTransferDirection:(unsigned long long)a5 allowBattery:(char)a6 powerNap:(char)a7 delay:(double)a8;
- (id)initWithInterval:(double)a0 gracePeriod:(double)a1 priority:(unsigned long long)a2 requireNetworkConnectivity:(char)a3 requireInexpensiveNetworkConnectivity:(char)a4 networkTransferUploadSize:(unsigned long long)a5 networkTransferDownloadSize:(unsigned long long)a6 allowBattery:(char)a7 powerNap:(char)a8 delay:(double)a9 requireBatteryLevel:(id)a10;

@end
