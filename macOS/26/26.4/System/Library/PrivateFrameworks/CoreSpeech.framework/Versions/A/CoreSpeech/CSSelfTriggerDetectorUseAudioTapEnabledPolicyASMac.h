@class CSPolicy;

@interface CSSelfTriggerDetectorUseAudioTapEnabledPolicyASMac : CSPolicy

@property (retain, nonatomic) CSPolicy *selfTriggerEnabledPolicyMac;

- (void).cxx_destruct;
- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addSelfTriggerDetectorEnabledConditions;

@end
