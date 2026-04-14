@class PKPaymentPreferenceContact, NSMutableDictionary;

@interface PKPaymentPassPreferenceController : PKPaymentPreferenceController

@property (retain, nonatomic) PKPaymentPreferenceContact *billingPreference;
@property (retain, nonatomic) NSMutableDictionary *passUniqueIDToCardEntryMap;
@property (retain, nonatomic) NSMutableDictionary *passUniqueIDToAcceptedPaymentApplicationsMap;
@property (retain, nonatomic) NSMutableDictionary *passUniqueIDToUnavailablePaymentApplicationsMap;

- (void).cxx_destruct;
- (void)setModel:(id)a0;
- (void)updatePreferences;
- (id)_acceptedPaymentApplicationsForPass:(id)a0;
- (id)_cardPreferenceForAcceptedPasses;
- (id)_cardPreferenceForUnavailablePasses;
- (void)_setupPreferences;
- (BOOL)_shouldDisplayPaymentApplicationWithAcceptedApplicationsCount:(long long)a0 unavailableApplicationsCount:(long long)a1;
- (id)_unavailablePaymentApplicationsForPass:(id)a0;
- (id)_unavailableReasonForPass:(id)a0;
- (BOOL)canSelectPreference:(id)a0 preferenceIndex:(unsigned long long)a1 subItemIndex:(unsigned long long)a2;
- (id)cardEntryForPass:(id)a0;
- (long long)numberOfMenuItemsInSection:(long long)a0;
- (long long)numberOfSubItemInPreference:(id)a0 preferenceIndex:(long long)a1;
- (BOOL)shouldEnableSubItemInPreference:(id)a0 preferenceIndex:(long long)a1 subItemIndex:(long long)a2;
- (id)titleForSubItemInPreference:(id)a0 preferenceIndex:(long long)a1 subItemIndex:(long long)a2;

@end
