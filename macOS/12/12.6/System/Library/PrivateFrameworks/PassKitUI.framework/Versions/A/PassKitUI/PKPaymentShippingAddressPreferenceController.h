@interface PKPaymentShippingAddressPreferenceController : PKPaymentPreferenceController

- (void)setModel:(id)a0;
- (void)updatePreferences;
- (long long)numberOfMenuItemsInSection:(long long)a0;
- (BOOL)canSelectPreference:(id)a0 preferenceIndex:(unsigned long long)a1 subItemIndex:(unsigned long long)a2;

@end
