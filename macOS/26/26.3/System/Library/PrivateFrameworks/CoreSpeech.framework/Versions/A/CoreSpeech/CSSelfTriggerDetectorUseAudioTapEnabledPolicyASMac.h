@class CSPolicy;

@interface CSSelfTriggerDetectorUseAudioTapEnabledPolicyASMac : CSPolicy

@property (retain, nonatomic) CSPolicy *selfTriggerEnabledPolicyMac;

- (id)init;
- (void).cxx_destruct;
- (void)_subscribeEventMonitors;
- (void)_addSelfTriggerDetectorEnabledConditions;

@end
