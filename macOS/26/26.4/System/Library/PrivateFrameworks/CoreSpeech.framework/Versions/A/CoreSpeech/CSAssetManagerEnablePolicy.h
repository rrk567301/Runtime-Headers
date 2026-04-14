@interface CSAssetManagerEnablePolicy : CSPolicy

- (void)_addAssetManagerEnabledConditions;
- (BOOL)_shouldCheckNetworkAvailability;
- (id)init;
- (void)_subscribeEventMonitors;

@end
