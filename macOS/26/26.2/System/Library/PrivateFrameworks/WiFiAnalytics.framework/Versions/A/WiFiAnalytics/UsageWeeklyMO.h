@class NSString, BSSMO, NSDate;

@interface UsageWeeklyMO : UsageMO <UsageMOProtocol>

@property (nonatomic) short band;
@property (copy, nonatomic) NSString *bssid;
@property (nonatomic) short ccaTotal_gt;
@property (nonatomic) short ccaTotal_le;
@property (copy, nonatomic) NSDate *date_ge;
@property (copy, nonatomic) NSDate *date_lt;
@property (copy, nonatomic) NSString *ipv4NetworkSignature;
@property (copy, nonatomic) NSString *ipv6NetworkSignature;
@property (nonatomic) BOOL isAnyAppInFG;
@property (nonatomic) BOOL isFTactive;
@property (nonatomic) BOOL isTimeSensitiveAppRunning;
@property (nonatomic) short rssi_ge;
@property (nonatomic) short rssi_lt;
@property (nonatomic) long long rxtxFrames_gt;
@property (nonatomic) long long rxtxFrames_le;
@property (nonatomic) long long seconds;
@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) short subband;
@property (retain, nonatomic) BSSMO *bss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)jumpBackOneSpan;
+ (unsigned long long)timeSpan;


@end
