@interface CSAssetManagerEnablePolicy : CSPolicy

- (id)init;
- (char)_shouldCheckNetworkAvailability;
- (void)_addAssetManagerEnabledConditions;
- (void)_subscribeEventMonitors;

@end
