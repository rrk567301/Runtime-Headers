@class NSDictionary;

@interface IXAppRemovabilityMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) char isUnknown;
@property (readonly, nonatomic) unsigned long long removability;
@property (readonly, nonatomic) unsigned long long client;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMetadataDictionary:(id)a0;
- (id)initWithRemovability:(unsigned long long)a0 client:(unsigned long long)a1;

@end
