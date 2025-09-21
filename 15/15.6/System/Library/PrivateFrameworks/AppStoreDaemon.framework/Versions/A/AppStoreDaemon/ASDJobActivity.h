@class NSArray, NSString, NSData, NSDate, NSNumber, NSDictionary;

@interface ASDJobActivity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *appReceiptData;
@property (copy, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSNumber *artistID;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSNumber *betaExternalVersionIdentifier;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *buyParams;
@property (copy, nonatomic) NSString *cancelDownloadURL;
@property (copy, nonatomic) NSString *clientID;
@property (nonatomic) char cancelIfDuplicate;
@property (copy, nonatomic) NSString *collectionName;
@property (copy, nonatomic) NSNumber *divertedTrackingID;
@property (copy, nonatomic) NSNumber *enableExtensions;
@property (nonatomic) char explicitContent;
@property (copy, nonatomic) NSNumber *externalOrderKey;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSNumber *genreID;
@property (nonatomic) char hasMessagesExtension;
@property (nonatomic) char hasWatchApp;
@property (nonatomic) char isAutomatic;
@property (nonatomic) char isCompatibilityUpdate;
@property (nonatomic) char isDeviceBasedVPP;
@property (nonatomic) char isGameCenterEnabled;
@property (nonatomic) char isInQueue;
@property (nonatomic) char isFromStore;
@property (nonatomic) char isPurchasedRedownload;
@property (nonatomic) char isPendingApproval;
@property (nonatomic) char isRestore;
@property (nonatomic) char isShared;
@property (nonatomic) char isTVTemplate;
@property (nonatomic) char isUpdate;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) char launchProhibited;
@property (copy, nonatomic) NSString *messagesArtworkURL;
@property (copy, nonatomic) NSDate *purchaseDate;
@property (copy, nonatomic) NSNumber *purchaseID;
@property (copy, nonatomic) NSString *ratingLabel;
@property (copy, nonatomic) NSNumber *ratingRank;
@property (copy, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) NSNumber *storeAccountID;
@property (copy, nonatomic) NSString *storeAccountName;
@property (copy, nonatomic) NSString *storeCorrelationKey;
@property (copy, nonatomic) NSDictionary *storeDownloadInfo;
@property (copy, nonatomic) NSString *storeDownloadKey;
@property (copy, nonatomic) NSString *storefront;
@property (copy, nonatomic) NSString *storeTransactionID;
@property (nonatomic) char softwareIconNeedsShine;
@property (copy, nonatomic) NSNumber *softwareVersionExternalIdentifier;
@property (copy, nonatomic) NSString *storeCohort;
@property (copy, nonatomic) NSString *thumbnailURL;
@property (getter=is32BitOnly) char thirtyTwoBitOnly;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *variantID;
@property (copy, nonatomic) NSNumber *iAdAttribution;
@property (copy, nonatomic) NSDate *iAdConversionDate;
@property (copy, nonatomic) NSDate *iAdImpressionDate;
@property (readonly, nonatomic) NSNumber *persistentID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
