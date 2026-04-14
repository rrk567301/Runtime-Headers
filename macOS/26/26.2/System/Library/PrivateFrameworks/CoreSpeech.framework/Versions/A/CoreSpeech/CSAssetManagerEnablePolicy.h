@interface CSAssetManagerEnablePolicy : CSPolicy

- (void)_subscribeEventMonitors;
- (id)init;
- (BOOL)_shouldCheckNetworkAvailability;
- (void)_addAssetManagerEnabledConditions;

@end
