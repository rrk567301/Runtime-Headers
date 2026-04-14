@class NSString;

@interface WiFiUsageSoftApStateInfo : NSObject

@property (nonatomic) BOOL active;
@property (retain, nonatomic) NSString *requester;
@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSString *changeReason;
@property (nonatomic) unsigned long long channelNumber;
@property (nonatomic) unsigned long long countryCode;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL isInfraConnected;
@property (nonatomic) BOOL isAwdlUp;
@property (nonatomic) double lowPowerModeDurationSec;
@property (nonatomic) double dynamicPowerModeDurationSec;
@property (nonatomic) BOOL compatibilityMode;
@property (nonatomic) double requestToUpLatency;
@property (nonatomic) double idleTimeBeforeTeardownSec;
@property (nonatomic) double idleTimeAfterLastClientDisconnectedSec;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
