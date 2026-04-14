@class NSString, NSURL, PKMapsBrand, PKMapsMerchant, NSDate;

@interface PKMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding> {
    unsigned long long _adamIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mapsDataLock;
    PKMapsMerchant *_mapsMerchant;
    PKMapsBrand *_mapsBrand;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *originURL;
@property (copy, nonatomic) NSString *webMerchantIdentifier;
@property (copy, nonatomic) NSString *webMerchantName;
@property (nonatomic) unsigned long long adamIdentifier_uint64;
@property (nonatomic) long long adamIdentifier;
@property (copy, nonatomic) NSString *businessConnectBrandIdentifier;
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
@property (nonatomic) BOOL useRawMerchantData;
@property (nonatomic) BOOL useDisplayNameIgnoringBrand;
@property (nonatomic) long long fallbackcategory;
@property (copy, nonatomic) NSString *fallbackDetailedCategory;
@property (copy, nonatomic) NSURL *fallbackLogoImageURL;
@property (retain, nonatomic) PKMapsMerchant *mapsMerchant;
@property (retain, nonatomic) PKMapsBrand *mapsBrand;
@property (nonatomic) BOOL mapsDataIsFromLocalMatch;
@property (copy, nonatomic) NSDate *lastForceMerchantReprocessingRequestDate;
@property (nonatomic) BOOL isPotentialUnattributedMapsMatch;
@property (readonly, nonatomic) BOOL shouldIgnoreMapsMatches;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL hasMapsMatch;
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

- (id)uniqueIdentifier;
- (id)primaryIdentifier;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)jsonDictionaryRepresentation;
- (unsigned long long)itemType;
- (id)description;
- (id)initWithCoder:(id)a0;
- (long long)adamIdentifier;
- (void)setAdamIdentifier:(long long)a0;
- (void)_encodeDeviceDataWithCloudStoreCoder:(id)a0;
- (void)_encodeServerDataWithCloudStoreCoder:(id)a0;
- (void)_regenerateDisplayName;
- (void)_regenerateDisplayNameIgnoringBrand;
- (unsigned long long)adamIdentifier_uint64;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (BOOL)hasBetterVisualPropertiesThanMerchant:(id)a0;
- (BOOL)hasCloudArchivableDeviceData;
- (id)initWithCloudStoreCoder:(id)a0;
- (BOOL)isCloudArchivableDeviceDataEqual:(id)a0;
- (BOOL)isEqualToMerchant:(id)a0;
- (id)mapsBrand;
- (id)mapsMerchant;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;
- (void)setAdamIdentifier_uint64:(unsigned long long)a0;
- (void)setMapsBrand:(id)a0;
- (void)setMapsMerchant:(id)a0;
- (BOOL)shouldBeCombinedWithMerchant:(id)a0;

@end
