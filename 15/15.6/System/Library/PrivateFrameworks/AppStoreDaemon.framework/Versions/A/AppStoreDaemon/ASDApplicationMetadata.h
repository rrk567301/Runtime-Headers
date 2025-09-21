@class NSString, NSNumber;

@interface ASDApplicationMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSNumber *accountID;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *artworkPath;
@property (readonly, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *cohort;
@property (copy, nonatomic) NSString *deviceVendorID;
@property (nonatomic) char deviceBasedVPP;
@property (copy, nonatomic) NSNumber *downloaderID;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (copy, nonatomic) NSNumber *familyID;
@property (nonatomic) char isBeta;
@property (copy, nonatomic) NSNumber *installOrder;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSNumber *purchaserDSID;
@property (copy, nonatomic) NSNumber *storeFront;
@property (copy, nonatomic) NSString *vendorName;
@property (copy, nonatomic) NSString *shortVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0;

@end
