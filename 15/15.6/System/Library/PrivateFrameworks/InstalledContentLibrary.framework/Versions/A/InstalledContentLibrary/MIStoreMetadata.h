@class NSString, NSArray, NSDictionary, NSData, NSNumber, MIStoreMetadataDistributor;

@interface MIStoreMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isEligibleForWatchAppInstall;
@property (copy, nonatomic) NSString *iAdAttribution;
@property (copy, nonatomic) NSString *iAdConversionDate;
@property (copy, nonatomic) NSString *iAdImpressionDate;
@property (copy, nonatomic) NSString *artistName;
@property (retain, nonatomic) NSNumber *betaExternalVersionIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *bundleShortVersionString;
@property (copy, nonatomic) NSString *purchaseDate;
@property (copy, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSNumber *DSPersonID;
@property (retain, nonatomic) NSNumber *downloaderID;
@property (retain, nonatomic) NSNumber *familyID;
@property (retain, nonatomic) NSNumber *purchaserID;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) char hasMessagesExtension;
@property (retain, nonatomic) NSNumber *initialODRSize;
@property (nonatomic, getter=isPurchasedRedownload) char purchasedRedownload;
@property (retain, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *shortItemName;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *label;
@property (nonatomic, getter=isLaunchProhibited) char launchProhibited;
@property (copy, nonatomic) NSString *ratingLabel;
@property (retain, nonatomic) NSNumber *ratingRank;
@property (copy, nonatomic) NSString *releaseDate;
@property (copy, nonatomic) NSString *assetToken;
@property (copy, nonatomic) NSString *softwareVersionBundleID;
@property (retain, nonatomic) NSNumber *softwareVersionExternalIdentifier;
@property (copy, nonatomic) NSString *sourceApp;
@property (copy, nonatomic) NSString *storeCohort;
@property (retain, nonatomic) NSNumber *storefront;
@property (copy, nonatomic) NSString *storefrontCountryCode;
@property (copy, nonatomic) NSString *variantID;
@property (copy, nonatomic) NSString *betaBuildGroupID;
@property (copy, nonatomic) NSString *genre;
@property (retain, nonatomic) NSNumber *genreID;
@property (copy, nonatomic) NSArray *subGenres;
@property (copy, nonatomic) NSArray *categories;
@property (nonatomic, getter=isGameCenterEnabled) char gameCenterEnabled;
@property (nonatomic) char gameCenterEverEnabled;
@property (nonatomic) char isAutoDownload;
@property (copy, nonatomic) NSString *referrerURL;
@property (copy, nonatomic) NSString *referrerApp;
@property (nonatomic) char sideLoadedDeviceBasedVPP;
@property (nonatomic) char deviceBasedVPP;
@property (nonatomic) char isB2BCustomApp;
@property (copy, nonatomic) NSString *enterpriseInstallURL;
@property (copy, nonatomic) NSString *redownloadParams;
@property (copy, nonatomic) NSDictionary *nameTranscriptions;
@property (nonatomic, getter=isFactoryInstall) char factoryInstall;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSData *protectedMetadata;
@property (retain, nonatomic) NSNumber *hasOrEverHasHadIAP;
@property (copy, nonatomic) MIStoreMetadataDistributor *distributorInfo;
@property (copy, nonatomic) NSString *managementDeclarationIdentifier;

+ (id)metadataFromPlistData:(id)a0 error:(id *)a1;
+ (id)metadataFromPlistAtURL:(id)a0 error:(id *)a1;
+ (id)metadataForBundleContainerURL:(id)a0 error:(id *)a1;
+ (id)metadataFromDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)propertyListDataWithError:(id *)a0;

@end
