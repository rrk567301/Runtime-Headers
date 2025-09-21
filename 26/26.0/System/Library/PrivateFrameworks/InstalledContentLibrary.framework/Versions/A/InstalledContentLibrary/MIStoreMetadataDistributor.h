@class NSString, NSDictionary, NSURL, NSNumber;

@interface MIStoreMetadataDistributor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *distributorID;
@property (copy, nonatomic) NSString *accountID;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSURL *supportPageURL;
@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSDictionary *localizedDistributorName;
@property (copy, nonatomic) NSString *developerID;
@property (copy, nonatomic) NSString *developerName;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSNumber *marketplaceItemID;
@property (copy, nonatomic) NSString *marketplaceDomain;
@property (nonatomic) unsigned long long betaTesterType;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) unsigned long long distributorType;
@property (readonly, nonatomic) BOOL distributorIsFirstPartyApple;
@property (readonly, nonatomic) BOOL distributorIsThirdParty;
@property (readonly, copy, nonatomic) NSString *distributorNameForCurrentLocale;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
