@class NSString, NSArray, NSURL, NSNumber;

@interface VSAppDescription : NSObject

@property (copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *shortenedDisplayName;
@property (copy, nonatomic) NSNumber *adamID;
@property (copy, nonatomic) NSString *buyParams;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *sellerName;
@property (copy, nonatomic) NSString *externalVersionID;
@property (copy, nonatomic) NSURL *appStoreURL;
@property (copy, nonatomic) NSURL *privacyPolicyEndpointURL;
@property (copy, nonatomic) NSURL *licenseAgreementEndpointURL;
@property (copy, nonatomic) NSString *rating;
@property (copy, nonatomic) NSNumber *contentRank;
@property (nonatomic) BOOL offersInAppPurchases;
@property (nonatomic) unsigned long long appType;
@property (copy, nonatomic) NSNumber *appSizeBytes;
@property (copy, nonatomic) NSString *artworkURLTemplate;
@property (nonatomic, getter=isDefaultAppForProvider) BOOL defaultAppForProvider;
@property (retain, nonatomic, getter=isVisionOSCompatible) NSNumber *visionOSCompatible;
@property (copy, nonatomic) NSArray *deviceFamilies;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)iconURLForSize:(struct CGSize { double x0; double x1; })a0;

@end
