@interface SiriSettingsIntents.GetIntentHandler : NSObject <INGetSettingIntentHandling> {
    void /* unknown type, empty encoding */ confirmationConfigProvider;
    void /* unknown type, empty encoding */ settingIdentifierHandlers;
}

- (void).cxx_destruct;
- (id)init;
- (void)confirmGetSetting:(id)a0 completion:(id /* block */)a1;
- (void)handleGetSetting:(id)a0 completion:(id /* block */)a1;

@end
