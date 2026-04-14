@class NSString, NSArray, NSData, NSDate, NSNumber;

@interface ASFReceipt : NSObject {
    void /* function */ path;
    void /* unknown type, empty encoding */ _storage;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSData *bundleIDData;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSString *cancellationReason;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSString *developerID;
@property (nonatomic, readonly) NSString *downloadID;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *frAppVersion;
@property (nonatomic, readonly) NSNumber *frToolVersion;
@property (nonatomic, readonly) NSString *hwtype;
@property (nonatomic, readonly) NSArray *iaps;
@property (nonatomic, readonly) NSString *installerVersionID;
@property (nonatomic, readonly) BOOL isDSIDless;
@property (nonatomic, readonly) BOOL isExpired;
@property (nonatomic, readonly) BOOL isRevoked;
@property (nonatomic, readonly) BOOL isVPPLicensed;
@property (nonatomic, readonly) NSNumber *itemID;
@property (nonatomic, readonly) NSData *opaqueDSIDData;
@property (nonatomic, readonly) NSString *opaqueDSIDString;
@property (nonatomic, readonly) NSString *organizationDisplayName;
@property (nonatomic, readonly) NSString *parentalControls;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSDate *purchaseDate;
@property (nonatomic, readonly) NSData *receiptData;
@property (nonatomic, readonly) NSString *receiptType;
@property (nonatomic, readonly) NSString *receiptDataString;
@property (nonatomic, readonly) NSDate *renewalDate;
@property (nonatomic, readonly) NSData *sha1;
@property (nonatomic, readonly) unsigned long long vppStateFlags;

+ (id)receiptFromBundleAtPath:(id)a0;
+ (id)receiptFromBundleAtURL:(id)a0;
+ (id)receiptWithContentsOfFile:(id)a0;
+ (id)receiptURLForBundleAtURL:(id)a0;
+ (id)receiptWithData:(id)a0;
+ (unsigned long long)vppStateFlagsWithRecord:(id)a0;

- (id)initWithContentsOfFile:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
