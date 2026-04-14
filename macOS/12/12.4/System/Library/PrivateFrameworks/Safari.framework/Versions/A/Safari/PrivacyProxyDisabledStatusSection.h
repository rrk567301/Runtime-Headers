@interface PrivacyProxyDisabledStatusSection : PrivacyProxyStatusSection

- (void)updateWithPrivacyProxyEnabledInICloudSettings:(BOOL)a0 restrictedToTrackersOnly:(BOOL)a1;
- (void)_initSubviews;
- (void)_turnOnPrivacyProxy;

@end
