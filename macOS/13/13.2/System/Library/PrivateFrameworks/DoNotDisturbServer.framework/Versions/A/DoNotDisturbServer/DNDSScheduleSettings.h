@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings

@property (readonly, copy, nonatomic) NSDate *creationDate;

+ (BOOL)supportsSecureCoding;
+ (id)settingsForRecord:(id)a0;
+ (id)defaultScheduleSettings;
+ (id)settingsWithClientSettings:(id)a0 creationDate:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (Class)classForCoder;
- (void).cxx_destruct;
- (id)replacementObjectForCoder:(id)a0;
- (id)makeRecord;
- (id)initWithScheduleEnabledSetting:(unsigned long long)a0 timePeriod:(id)a1 bedtimeBehaviorEnabledSetting:(unsigned long long)a2 creationDate:(id)a3;

@end
