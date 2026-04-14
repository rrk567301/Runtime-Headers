@class CSPolicy;

@interface CSSelfTriggerDetectorUseAudioTapEnabledPolicyASMac : CSPolicy

@property (retain, nonatomic) CSPolicy *selfTriggerEnabledPolicyMac;

- (void)_subscribeEventMonitors;
- (void).cxx_destruct;
- (id)init;
- (void)_addSelfTriggerDetectorEnabledConditions;

@end
