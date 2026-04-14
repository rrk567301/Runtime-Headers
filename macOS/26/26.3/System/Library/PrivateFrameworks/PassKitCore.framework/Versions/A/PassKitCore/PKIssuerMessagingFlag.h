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

- (id)description;
- (id)primaryIdentifier;
- (unsigned long long)itemType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)initWithCloudStoreCoder:(id)a0;
- (BOOL)isEqualToIssuerMessagingFlag:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;

@end
