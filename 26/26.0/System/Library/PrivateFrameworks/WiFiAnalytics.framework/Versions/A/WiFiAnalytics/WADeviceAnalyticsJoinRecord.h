@class NSString, NetworkMO, LANMO, BSSMO;

@interface WADeviceAnalyticsJoinRecord : WADeviceAnalyticsDatedRecord

@property (copy, nonatomic) NSString *apProfileID;
@property (nonatomic) short band;
@property (nonatomic) short channel;
@property (nonatomic) int dhcpLatencyMs;
@property (nonatomic) int dhcpLeaseMins;
@property (nonatomic) BOOL dhcpSuccess;
@property (nonatomic) int ipv4Addr;
@property (nonatomic) int ipv4routerAddr;
@property (nonatomic) short motionState;
@property (nonatomic) short networkAuthFlags;
@property (nonatomic) BOOL networkIsHome;
@property (nonatomic) BOOL networkIsWork;
@property (nonatomic) int reason;
@property (copy, nonatomic) NSString *routerMAC;
@property (nonatomic) short rssi;
@property (nonatomic) short snr;
@property (nonatomic) int status;
@property (nonatomic) int subReason;
@property (nonatomic) BOOL success;
@property (nonatomic) int networkFlags;
@property (retain, nonatomic) BSSMO *bss;
@property (retain, nonatomic) LANMO *lan;
@property (retain, nonatomic) NetworkMO *network;

+ (id)fetchRequest;
+ (id)earliestJoinDate:(id)a0 moc:(id)a1;
+ (unsigned long long)joinCount:(id)a0 bssid:(id)a1 maxAgeInDays:(unsigned long long)a2 success:(BOOL)a3 moc:(id)a4;
+ (id)mostRecentJoinsWithBatchSize:(unsigned long long)a0 bssid:(id)a1 ssid:(id)a2 moc:(id)a3;

- (id)description;

@end
