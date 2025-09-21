@class NSDictionary;

@interface APXPCActivityCriteria : NSObject

@property (nonatomic) long long firstRunInterval;
@property (nonatomic) long long delay;
@property (nonatomic) long long interval;
@property (nonatomic) char requiresNetworkConnectivity;
@property (nonatomic) char requireBuddyComplete;
@property (nonatomic) char requireClassCData;
@property (nonatomic) char allowBattery;
@property (nonatomic) char requireSleep;
@property (nonatomic) char isRepeating;
@property (nonatomic) long long gracePeriod;
@property (nonatomic) const char *priority;
@property (nonatomic) char isCPUIntensive;
@property (nonatomic) char isDiskIntensive;
@property (nonatomic) NSDictionary *customProperties;
@property (nonatomic) double scheduledTime;

- (id)init;
- (id)translateCriteria;

@end
