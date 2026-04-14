@interface CSAssetManagerEnablePolicy : CSPolicy

- (id)init;
- (BOOL)_shouldCheckNetworkAvailability;
- (void)_subscribeEventMonitors;
- (void)_addAssetManagerEnabledConditions;

@end
