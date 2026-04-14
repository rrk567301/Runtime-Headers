@class PKPaymentShippingAddressPreferenceController, NSString, NSArray, PKPaymentShippingMethodPreferenceController, PKPaymentPassPreferenceController, PKPaymentRemoteDevicePreferenceController, PKPaymentAuthorizationLayout, PKPaymentAuthorizationDataModel, PKPaymentShippingContactPreferenceController;
@protocol PKPaymentAuthorizationDataControllerDelegate;

@interface PKPaymentAuthorizationDataController : NSObject <PKPaymentAuthorizationItemsViewDataSource>

@property (retain, nonatomic) PKPaymentAuthorizationDataModel *dataModel;
@property (retain, nonatomic) PKPaymentPassPreferenceController *paymentPassPreferenceController;
@property (retain, nonatomic) PKPaymentRemoteDevicePreferenceController *remoteDevicePreferenceController;
@property (retain, nonatomic) PKPaymentShippingAddressPreferenceController *shippingAddressPreferenceController;
@property (retain, nonatomic) PKPaymentShippingMethodPreferenceController *shippingMethodPreferenceController;
@property (retain, nonatomic) PKPaymentShippingContactPreferenceController *shippingContactPreferenceController;
@property (retain, nonatomic) NSArray *allPreferenceControllers;
@property (retain, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout;
@property (weak, nonatomic) id<PKPaymentAuthorizationDataControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updatePreferences;
- (id)initWithDataModel:(id)a0;
- (void)setupPreferences;
- (void)setupRemoteDevicePreference;
- (void)setupPaymentPassPreference;
- (void)setupShippingAddressPreference;
- (void)setupShippingMethodPreference;
- (void)setupShippingContactPreference;
- (BOOL)_updateMeCardContact:(id)a0 newContact:(id)a1 keys:(id)a2;
- (id)_labelStringForDataItem:(id)a0;
- (id)_valuesForItemAtIndex:(unsigned long long)a0;
- (BOOL)_selectableForDataItem:(id)a0;
- (id)_preferenceControllerForItemAtIndex:(unsigned long long)a0;
- (id)_badgeViewForDataItem:(id)a0;
- (id)_valuesForPaymentSummaryItems:(id)a0;
- (id)_valuesForCardDataItem:(id)a0;
- (id)_valuesForRemotePaymentInstrumentDataItem:(id)a0;
- (id)_valuesForShippingAddress:(id)a0;
- (id)_valuesForShippingMethods:(id)a0;
- (id)_valuesForShippingContact:(id)a0;
- (id)_formatDateRangeStartDate:(id)a0 endDate:(id)a1;
- (unsigned long long)numberOfItemsInPaymentAuthorizationItemsView:(id)a0;
- (id)paymentAuthorizationItemsView:(id)a0 viewAtIndex:(unsigned long long)a1;
- (BOOL)paymentAuthorizationItemsView:(id)a0 shouldAppendSeparatorAfterViewAtIndex:(unsigned long long)a1;

@end
