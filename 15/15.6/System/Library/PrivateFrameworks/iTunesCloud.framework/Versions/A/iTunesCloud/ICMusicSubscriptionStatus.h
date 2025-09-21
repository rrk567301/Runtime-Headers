@class NSString, NSDictionary, NSArray, NSDate, NSNumber;

@interface ICMusicSubscriptionStatus : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {
    char _isPartOfBundle;
    char _isBundleOwner;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) char hasCatalogPlaybackCapability;
@property (readonly, nonatomic) char hasAddToCloudLibraryCapability;
@property (readonly, nonatomic, getter=isCloudMusicServiceEnabled) char cloudMusicServiceEnabled;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic, getter=isMinorAccountHolder) char minorAccountHolder;
@property (readonly, copy, nonatomic) NSDate *studentExpirationDate;
@property (readonly, copy, nonatomic) NSString *studentVerificationId;
@property (readonly, copy, nonatomic) NSString *studentVerifier;
@property (readonly, nonatomic) char hasFamily;
@property (readonly, nonatomic) char hasFamilyGreaterThanOneMember;
@property (readonly, nonatomic, getter=isHeadOfHousehold) char headOfHousehold;
@property (readonly, nonatomic, getter=isMatchEnabled) char matchEnabled;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSDate *initialPurchaseTimestamp;
@property (readonly, copy, nonatomic) NSDate *serviceBeginsTimestamp;
@property (readonly, nonatomic) char hasOfflineSlots;
@property (readonly, nonatomic, getter=isAutoRenewEnabled) char autoRenewEnabled;
@property (readonly, nonatomic, getter=isInFreePeriod) char inFreePeriod;
@property (readonly, nonatomic, getter=isInFreeTrial) char inFreeTrial;
@property (readonly, nonatomic, getter=isEligibleForFreeTrial) char eligibleForFreeTrial;
@property (readonly, nonatomic, getter=isPurchaser) char purchaser;
@property (readonly, nonatomic) long long carrierBundlingStatusType;
@property (readonly, nonatomic) long long reasonType;
@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) long long statusType;
@property (readonly, nonatomic, getter=isAdministrator) char administrator;
@property (readonly, nonatomic, getter=isDiscoveryModeEligible) char discoveryModeEligible;
@property (readonly, nonatomic, getter=isPartOfBundle) char partOfBundle;
@property (readonly, nonatomic, getter=isBundleOnwer) char bundleOwner;
@property (readonly, copy, nonatomic) NSArray *eligibleOffers;
@property (readonly, nonatomic, getter=isInGlidePreview) char inGlidePreview;
@property (readonly, copy, nonatomic) NSArray *termsStatusList;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSString *cellularOperatorName;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) long long carrierBundlingErrorCode;
@property (readonly, copy, nonatomic) NSNumber *acceptSilentAuth;

+ (unsigned long long)_capabilitiesForStatusType:(long long)a0 carrierBundlingStatusType:(long long)a1 isMatchEnabled:(char)a2;
+ (id)dateFromMilliseconds:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (char)isEqualToStatus:(id)a0;
- (void)_copySubscriptionStatusPropertiesToStatus:(id)a0 withZone:(struct _NSZone { } *)a1;
- (char)hasCapability:(unsigned long long)a0;
- (id)initWithResponseDictionary:(id)a0;

@end
