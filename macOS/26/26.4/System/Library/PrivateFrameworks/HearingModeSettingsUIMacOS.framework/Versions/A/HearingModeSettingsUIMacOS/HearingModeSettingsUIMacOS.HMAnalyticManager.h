@interface HearingModeSettingsUIMacOS.HMAnalyticManager : NSObject {
    void /* unknown type, empty encoding */ headphoneDevice;
    void /* unknown type, empty encoding */ eventPayload;
}

- (void).cxx_destruct;
- (id)init;
- (void)addCustomEventWithEventName:(long long)a0 key:(long long)a1 value:(id)a2;
- (void)sendCustomEvent;
- (id)initWithHpDevice:(id)a0;
- (void)sendHASettingsEvent;
- (void)sendHPSettingsEvent;

@end
