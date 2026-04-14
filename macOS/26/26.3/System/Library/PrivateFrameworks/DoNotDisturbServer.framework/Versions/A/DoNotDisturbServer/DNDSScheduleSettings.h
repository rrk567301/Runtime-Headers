@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings

@property (readonly, copy, nonatomic) NSDate *creationDate;

+ (BOOL)supportsSecureCoding;
+ (id)settingsForRecord:(id)a0;
+ (id)defaultScheduleSettings;
+ (id)settingsWithClientSettings:(id)a0 creationDate:(id)a1;

- (id)initWithScheduleEnabledSetting:(unsigned long long)a0 timePeriod:(id)a1 bedtimeBehaviorEnabledSetting:(unsigned long long)a2 creationDate:(id)a3;
- (id)description;
- (id)replacementObjectForCoder:(id)a0;
- (Class)classForCoder;
- (void).cxx_destruct;
- (id)makeRecord;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
