@interface CSAssetManagerEnablePolicy : CSPolicy

- (BOOL)_shouldCheckNetworkAvailability;
- (void)_addAssetManagerEnabledConditions;
- (void)_subscribeEventMonitors;
- (id)init;

@end
