@class INCurrencyAmount, NSString, INPerson;

@interface INRequestPaymentIntent : INIntent <INRequestPaymentIntentExport>

@property (readonly, copy) INPerson *payer;
@property (readonly, copy) INCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *note;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)a0;
- (id)_dictionaryRepresentation;
- (void)setNote:(id)a0;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (void)_setMetadata:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (BOOL)_isUserConfirmationRequired;
- (BOOL)configureAttributeSet:(id)a0 includingData:(BOOL)a1;
- (void)setCurrencyAmount:(id)a0;
- (void)setPayer:(id)a0;
- (id)initWithPayer:(id)a0 currencyAmount:(id)a1 note:(id)a2;

@end
