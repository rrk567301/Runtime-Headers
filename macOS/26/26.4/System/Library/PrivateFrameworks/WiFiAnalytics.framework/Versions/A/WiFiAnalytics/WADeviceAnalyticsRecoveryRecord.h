@class NSString;

@interface WADeviceAnalyticsRecoveryRecord : WADeviceAnalyticsDatedRecord

@property (nonatomic) int apple80211Return;
@property (copy, nonatomic) NSString *recoveryReason;
@property (copy, nonatomic) NSString *recoveryType;

+ (id)fetchRequest;
+ (id)unusedSuperEntityProperties;

@end
