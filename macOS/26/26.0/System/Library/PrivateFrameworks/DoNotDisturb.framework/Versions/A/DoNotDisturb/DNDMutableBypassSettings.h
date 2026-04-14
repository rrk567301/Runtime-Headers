@class NSString;

@interface DNDMutableBypassSettings : DNDBypassSettings

@property unsigned long long immediateBypassEventSourceType;
@property (copy) NSString *immediateBypassCNGroupIdentifier;
@property unsigned long long repeatEventSourceBehaviorEnabledSetting;

- (void)setImmediateBypassEventSourceType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRepeatEventSourceBehaviorEnabledSetting:(unsigned long long)a0;
- (void)setImmediateBypassCNGroupIdentifier:(id)a0;

@end
