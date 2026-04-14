@class NSString;

@interface WADeviceAnalyticsJoinRecord : WADeviceAnalyticsDatedRecord

@property (copy, nonatomic) NSString *apProfileID;
@property (nonatomic) int dhcpLatencyMs;
@property (nonatomic) int dhcpLeaseMins;
@property (nonatomic) BOOL dhcpSuccess;
@property (nonatomic) int ipv4Addr;
@property (nonatomic) int ipv4routerAddr;
@property (nonatomic) short networkAuthFlags;
@property (nonatomic) int networkFlags;
@property (nonatomic) BOOL networkIsHome;
@property (nonatomic) BOOL networkIsWork;
@property (copy, nonatomic) NSString *routerMAC;
@property (nonatomic) short snr;

+ (id)fetchRequest;
+ (id)earliestJoinDate:(id)a0 moc:(id)a1;
+ (unsigned long long)joinCount:(id)a0 bssid:(id)a1 maxAgeInDays:(unsigned long long)a2 success:(BOOL)a3 moc:(id)a4;
+ (id)joinFailureAsString:(int)a0;
+ (id)joinReasonAsString:(int)a0;
+ (id)mostRecentJoinsWithBatchSize:(unsigned long long)a0 bssid:(id)a1 ssid:(id)a2 moc:(id)a3;

- (id)description;
- (id)attributeDescription:(id)a0;

@end
