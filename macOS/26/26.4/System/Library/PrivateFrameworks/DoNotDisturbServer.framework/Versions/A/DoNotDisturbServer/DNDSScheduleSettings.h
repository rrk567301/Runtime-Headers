@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings

@property (readonly, copy, nonatomic) NSDate *creationDate;

+ (BOOL)supportsSecureCoding;
+ (id)settingsWithClientSettings:(id)a0 creationDate:(id)a1;
+ (id)defaultScheduleSettings;
+ (id)settingsForRecord:(id)a0;

- (id)replacementObjectForCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithScheduleEnabledSetting:(unsigned long long)a0 timePeriod:(id)a1 bedtimeBehaviorEnabledSetting:(unsigned long long)a2 creationDate:(id)a3;
- (unsigned long long)hash;
- (id)description;
- (Class)classForCoder;
- (id)makeRecord;

@end
