@class NSString;

@interface PKIssuerMessagingFlag : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long contextType;
@property (copy, nonatomic) NSString *contextIdentifier;
@property (nonatomic) unsigned long long contextFeature;

+ (id)recordNamePrefix;
+ (id)issuerMessagingFlagIdentifierFromRecordName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)itemType;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)primaryIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)initWithCloudStoreCoder:(id)a0;
- (BOOL)isEqualToIssuerMessagingFlag:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;

@end
