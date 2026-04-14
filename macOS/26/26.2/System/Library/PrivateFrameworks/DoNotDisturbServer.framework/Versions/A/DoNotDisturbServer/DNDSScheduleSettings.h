@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings

@property (readonly, copy, nonatomic) NSDate *creationDate;

+ (id)settingsForRecord:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)settingsWithClientSettings:(id)a0 creationDate:(id)a1;
+ (id)defaultScheduleSettings;

- (id)makeRecord;
- (id)initWithScheduleEnabledSetting:(unsigned long long)a0 timePeriod:(id)a1 bedtimeBehaviorEnabledSetting:(unsigned long long)a2 creationDate:(id)a3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (id)replacementObjectForCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
