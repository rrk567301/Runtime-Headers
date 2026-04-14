@class NSString, NSArray, PKDiscoveryItem, NSSet, NSDictionary, PKDiscoveryCallToActionURL, PKDiscoveryMedia, PKColor, NSNumber;

@interface PKDiscoveryCallToAction : NSObject <NSSecureCoding> {
    NSArray *_paymentNetworks;
    NSSet *_allowedFeatureIdentifiers;
    NSSet *_transitNetworkIdentifiers;
    NSSet *_productIdentifiers;
    NSNumber *_appStoreAppIdentifier;
    BOOL _foregroundContentModeIsSet;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedSubtitle;
@property (retain, nonatomic) NSString *localizedButtonText;
@property (nonatomic) NSString *referrerIdentifier;
@property (readonly, nonatomic) NSString *titleKey;
@property (readonly, nonatomic) NSString *subtitleKey;
@property (readonly, nonatomic) NSString *buttonTextKey;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) NSDictionary *actionInfo;
@property (readonly, nonatomic) PKDiscoveryMedia *icon;
@property (nonatomic, getter=shouldRoundIcon) BOOL roundIcon;
@property (readonly, nonatomic) PKDiscoveryMedia *wordmarkAsset;
@property (readonly, nonatomic) PKColor *backgroundColor;
@property (nonatomic) long long foregroundContentMode;
@property (readonly, nonatomic) long long paymentSetupMode;
@property (readonly, nonatomic) NSArray *paymentNetworks;
@property (readonly, nonatomic) NSSet *allowedFeatureIdentifiers;
@property (readonly, nonatomic) NSSet *transitNetworkIdentifiers;
@property (readonly, nonatomic) NSNumber *appStoreAppIdentifier;
@property (readonly, nonatomic) NSSet *productIdentifiers;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (weak, nonatomic) PKDiscoveryItem *item;
@property (readonly, nonatomic) PKDiscoveryCallToActionURL *actionURL;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setMediaBundle:(id)a0;
- (void)localizeWithBundle:(id)a0;
- (void)localizeWithBundle:(id)a0 table:(id)a1;

@end
