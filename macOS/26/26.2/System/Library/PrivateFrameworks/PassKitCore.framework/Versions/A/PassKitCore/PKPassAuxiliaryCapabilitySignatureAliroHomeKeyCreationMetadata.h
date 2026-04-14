@class NSData, NSUUID;

@interface PKPassAuxiliaryCapabilitySignatureAliroHomeKeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) NSData *readerIdentifier;
@property (readonly, nonatomic) NSData *readerPublicKey;
@property (readonly, nonatomic) NSUUID *homeIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithReaderIdentifier:(id)a0 readerPublicKey:(id)a1 homeIdentifier:(id)a2;

@end
