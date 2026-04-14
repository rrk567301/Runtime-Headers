@class CSPolicy;

@interface CSSelfTriggerDetectorUseAVVCEnabledPolicyASMac : CSPolicy

@property (retain, nonatomic) CSPolicy *selfTriggerEnabledPolicyMac;

- (id)init;
- (void)_subscribeEventMonitors;
- (void).cxx_destruct;
- (void)_addSelfTriggerDetectorEnabledConditions;

@end
