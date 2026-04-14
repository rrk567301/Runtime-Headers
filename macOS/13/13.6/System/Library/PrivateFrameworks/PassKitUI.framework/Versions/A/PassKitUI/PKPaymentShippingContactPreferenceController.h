@interface PKPaymentShippingContactPreferenceController : PKPaymentPreferenceController

- (void)setModel:(id)a0;
- (void)updatePreferences;
- (id)_contactKeysForContactFields:(id)a0;
- (BOOL)canSelectPreference:(id)a0 preferenceIndex:(unsigned long long)a1 subItemIndex:(unsigned long long)a2;
- (long long)numberOfMenuItemsInSection:(long long)a0;

@end
