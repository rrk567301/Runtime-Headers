@interface NFRadioPowerSwitch : NFPrivateService

- (BOOL)canRun;
- (id)serviceName;
- (void)requestUserSettingsNotificationWithCompletion:(id /* block */)a0 popupInterval:(double)a1;

@end
