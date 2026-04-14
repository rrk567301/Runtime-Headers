@interface PKPaymentShippingAddressPreferenceController : PKPaymentPreferenceController

- (void)setModel:(id)a0;
- (void)updatePreferences;
- (BOOL)canSelectPreference:(id)a0 preferenceIndex:(unsigned long long)a1 subItemIndex:(unsigned long long)a2;
- (long long)numberOfMenuItemsInSection:(long long)a0;

@end
