@class NSDate, NSString, NSArray, NSURL, NSSet, PKEnteredValueActionItem, NSDictionary, PKPaymentPassActionRemoteConfiguration, PKAutoTopUpActionItem, PKTransitCommutePlan, PKImage;

@interface PKPaymentPassAction : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_rawDictionary;
    NSDictionary *_localizations;
    NSDate *_availableFromRaw;
    NSDate *_availableUntilRaw;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKImage *image;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) NSString *auxiliaryPassInformationIdentifier;
@property (readonly, nonatomic) NSString *auxiliaryPassInformationItemIdentifier;
@property (readonly, copy, nonatomic) NSArray *purchaseNewActionItems;
@property (readonly, nonatomic) NSDictionary *vehicleFunctionActions;
@property (readonly, nonatomic) NSURL *appClipURL;
@property (readonly, nonatomic) NSURL *externalURL;
@property (copy, nonatomic) NSString *associatedPlanIdentifier;
@property (copy, nonatomic) PKTransitCommutePlan *associatedPlan;
@property (copy, nonatomic) NSString *associatedEnteredValueIdentifier;
@property (copy, nonatomic) NSString *associatedAutoTopUpIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *actionDescription;
@property (copy, nonatomic) NSString *confirmationTitle;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *serviceProviderIdentifier;
@property (copy, nonatomic) NSString *serviceProviderLocalizedDisplayName;
@property (copy, nonatomic) NSString *serviceProviderCountryCode;
@property (copy, nonatomic) NSArray *serviceProviderAcceptedNetworks;
@property (copy, nonatomic) NSSet *serviceProviderSupportedCountries;
@property (nonatomic) unsigned long long serviceProviderCapabilities;
@property (copy, nonatomic) NSDictionary *appletData;
@property (nonatomic) double availableFromRelative;
@property (nonatomic) double availableUntilRelative;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) PKAutoTopUpActionItem *autoTopUpItem;
@property (readonly, copy, nonatomic) NSString *headerText;
@property (readonly, copy, nonatomic) NSString *footerText;
@property (readonly, copy, nonatomic) NSArray *selectedActionItems;
@property (readonly, nonatomic) PKEnteredValueActionItem *enteredValueItem;
@property (readonly, nonatomic) PKPaymentPassActionRemoteConfiguration *remoteContentConfiguration;
@property (readonly, nonatomic) char hasRemoteContent;
@property (readonly, nonatomic) char remoteContentRequiresAppletData;
@property (nonatomic) char reverseButtonTitleForLegacySuica;
@property (readonly, nonatomic) char featured;
@property (readonly, copy, nonatomic) NSString *relevantPropertyIdentifier;
@property (readonly, copy, nonatomic) NSDate *availableFrom;
@property (readonly, nonatomic) double availableFromOffsetFromUTC;
@property (readonly, copy, nonatomic) NSDate *availableUntil;
@property (readonly, nonatomic) char isActionAvailable;
@property (readonly, copy, nonatomic) NSString *unavailableBeforeReason;
@property (readonly, copy, nonatomic) NSString *unavailableAfterReason;
@property (readonly, copy, nonatomic) NSString *unavailableActionReason;
@property (readonly, copy, nonatomic) NSString *unavailableActionTitle;
@property (readonly, copy, nonatomic) NSString *unavailableActionURL;
@property (readonly, nonatomic) unsigned long long unavailableActionBehavior;
@property (readonly, copy, nonatomic) NSArray *serviceProviderSupportedNetworks;

+ (id)effectiveActionForActions:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithContext:(long long)a0;
- (id)_initWithAppClipURL:(id)a0;
- (id)_initWithExternalURL:(id)a0;
- (id)_initWithImage:(id)a0 title:(id)a1;
- (id)_localizableKeys;
- (void)_processLocalizableStrings:(id /* block */)a0;
- (id)actionUpdatedWithDictionary:(id)a0 localizations:(id)a1;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (id)initWithDictionary:(id)a0 localizations:(id)a1;

@end
