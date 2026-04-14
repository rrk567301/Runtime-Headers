@class PKPaymentPreferenceContact, NSMutableDictionary;

@interface PKPaymentRemoteDevicePreferenceController : PKPaymentPreferenceController

@property (retain, nonatomic) PKPaymentPreferenceContact *billingPreference;
@property (retain, nonatomic) NSMutableDictionary *instrumentToCardEntryMap;
@property (retain, nonatomic) NSMutableDictionary *instrumentToAcceptedPaymentApplicationsMap;
@property (retain, nonatomic) NSMutableDictionary *instrumentToUnavailablePaymentApplicationsMap;

- (void).cxx_destruct;
- (void)setModel:(id)a0;
- (void)updatePreferences;
- (void)_setupPreferences;
- (long long)numberOfMenuItemsInSection:(long long)a0;
- (BOOL)_shouldDisplayPaymentApplicationWithAcceptedApplicationsCount:(long long)a0 unavailableApplicationsCount:(long long)a1;
- (BOOL)canSelectPreference:(id)a0 preferenceIndex:(unsigned long long)a1 subItemIndex:(unsigned long long)a2;
- (long long)numberOfSubItemInPreference:(id)a0 preferenceIndex:(long long)a1;
- (id)titleForSubItemInPreference:(id)a0 preferenceIndex:(long long)a1 subItemIndex:(long long)a2;
- (BOOL)shouldEnableSubItemInPreference:(id)a0 preferenceIndex:(long long)a1 subItemIndex:(long long)a2;
- (id)_acceptedPaymentApplicationsForRemoteInstrument:(id)a0;
- (id)_unavailablePaymentApplicationsForRemoteInstrument:(id)a0;
- (id)_cardPreferenceForAcceptedInstrumentsInRemoteDevice:(id)a0;
- (id)_cardPreferenceForAllUnavailableInstruments;
- (id)_unavailableReasonForInstrument:(id)a0;
- (BOOL)_isPaymentPassApplicationStateDeactivated:(long long)a0;
- (id)cardEntryForRemotePaymentInstrument:(id)a0;

@end
