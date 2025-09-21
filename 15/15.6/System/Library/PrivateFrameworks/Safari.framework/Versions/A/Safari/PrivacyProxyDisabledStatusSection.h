@interface PrivacyProxyDisabledStatusSection : PrivacyProxyStatusSection

- (void)_initSubviews;
- (void)_turnOnPrivacyProxy;
- (void)updateWithPrivacyProxyEnabledInICloudSettings:(char)a0 restrictedToTrackersOnly:(char)a1;

@end
