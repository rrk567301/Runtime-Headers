@interface CSAssetManagerEnablePolicy : CSPolicy

- (BOOL)_shouldCheckNetworkAvailability;
- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addAssetManagerEnabledConditions;

@end
