@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings

@property (readonly, copy, nonatomic) NSDate *creationDate;

+ (BOOL)supportsSecureCoding;
+ (id)defaultScheduleSettings;
+ (id)settingsWithClientSettings:(id)a0 creationDate:(id)a1;
+ (id)settingsForRecord:(id)a0;

- (id)replacementObjectForCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithScheduleEnabledSetting:(unsigned long long)a0 timePeriod:(id)a1 bedtimeBehaviorEnabledSetting:(unsigned long long)a2 creationDate:(id)a3;
- (id)description;
- (id)makeRecord;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
