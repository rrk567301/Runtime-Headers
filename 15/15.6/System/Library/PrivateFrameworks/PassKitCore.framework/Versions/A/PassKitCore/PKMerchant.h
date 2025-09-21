@class NSString, NSURL, PKMapsBrand, PKMapsMerchant, NSDate;

@interface PKMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSURL *originURL;
@property (copy, nonatomic) NSString *webMerchantIdentifier;
@property (copy, nonatomic) NSString *webMerchantName;
@property (nonatomic) long long adamIdentifier;
@property (nonatomic) long long industryCode;
@property (copy, nonatomic) NSString *industryCategory;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *rawName;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *rawCANL;
@property (copy, nonatomic) NSString *rawCity;
@property (copy, nonatomic) NSString *rawState;
@property (copy, nonatomic) NSString *rawCountry;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *zip;
@property (nonatomic) long long cleanConfidenceLevel;
@property (nonatomic) char useRawMerchantData;
@property (nonatomic) char useDisplayNameIgnoringBrand;
@property (nonatomic) long long fallbackcategory;
@property (copy, nonatomic) NSString *fallbackDetailedCategory;
@property (copy, nonatomic) NSURL *fallbackLogoImageURL;
@property (retain, nonatomic) PKMapsMerchant *mapsMerchant;
@property (retain, nonatomic) PKMapsBrand *mapsBrand;
@property (nonatomic) char mapsDataIsFromLocalMatch;
@property (copy, nonatomic) NSDate *lastForceMerchantReprocessingRequestDate;
@property (nonatomic) char isPotentialUnattributedMapsMatch;
@property (readonly, nonatomic) char shouldIgnoreMapsMatches;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char hasMapsMatch;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *displayNameIgnoringBrand;
@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) NSString *detailedCategory;
@property (readonly, nonatomic) NSURL *heroImageURL;
@property (readonly, nonatomic) NSString *heroImageAttribution;
@property (readonly, nonatomic) NSURL *logoImageURL;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSURL *businessChatURL;

+ (id)recordNamePrefix;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (id)primaryIdentifier;
- (unsigned long long)itemType;
- (id)jsonDictionaryRepresentation;
- (void)_encodeDeviceDataWithCloudStoreCoder:(id)a0;
- (void)_encodeServerDataWithCloudStoreCoder:(id)a0;
- (void)_regenerateDisplayName;
- (void)_regenerateDisplayNameIgnoringBrand;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (char)hasBetterVisualPropertiesThanMerchant:(id)a0;
- (char)hasCloudArchivableDeviceData;
- (id)initWithCloudStoreCoder:(id)a0;
- (char)isCloudArchivableDeviceDataEqual:(id)a0;
- (char)isEqualToMerchant:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;
- (char)shouldBeCombinedWithMerchant:(id)a0;

@end
