@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings

@property (readonly, copy, nonatomic) NSDate *creationDate;

+ (BOOL)supportsSecureCoding;
+ (id)settingsForRecord:(id)a0;
+ (id)settingsWithClientSettings:(id)a0 creationDate:(id)a1;
+ (id)defaultScheduleSettings;

- (id)initWithScheduleEnabledSetting:(unsigned long long)a0 timePeriod:(id)a1 bedtimeBehaviorEnabledSetting:(unsigned long long)a2 creationDate:(id)a3;
- (unsigned long long)hash;
- (id)replacementObjectForCoder:(id)a0;
- (Class)classForCoder;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)makeRecord;

@end
