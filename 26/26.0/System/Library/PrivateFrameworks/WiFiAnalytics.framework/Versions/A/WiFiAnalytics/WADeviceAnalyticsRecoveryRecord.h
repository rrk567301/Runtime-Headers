@class NSString, BSSMO;

@interface WADeviceAnalyticsRecoveryRecord : WADeviceAnalyticsDatedRecord

@property (nonatomic) int apple80211Return;
@property (copy, nonatomic) NSString *recoveryReason;
@property (copy, nonatomic) NSString *recoveryType;
@property (retain, nonatomic) BSSMO *bss;

+ (id)fetchRequest;

@end
