@interface HMDSoftwareUpdateAutomaticUpdateToggledEvent : HMMLogEvent

@property (nonatomic, getter=isEnabled) char enabled;

+ (id)eventWithAutomaticUpdateEnabled:(char)a0;

@end
