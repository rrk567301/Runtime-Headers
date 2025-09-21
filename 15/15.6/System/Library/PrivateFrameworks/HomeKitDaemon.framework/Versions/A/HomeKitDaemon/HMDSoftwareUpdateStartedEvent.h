@interface HMDSoftwareUpdateStartedEvent : HMMLogEvent

@property (nonatomic, getter=isAutomaticUpdateEnabled) char automaticUpdateEnabled;

+ (id)eventUpdateStartedWithAutomaticUpdateEnabled:(char)a0;

@end
