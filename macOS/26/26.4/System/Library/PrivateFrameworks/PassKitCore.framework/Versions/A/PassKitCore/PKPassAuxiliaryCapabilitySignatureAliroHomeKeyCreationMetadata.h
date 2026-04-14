@class NSData, NSUUID;

@interface PKPassAuxiliaryCapabilitySignatureAliroHomeKeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) NSData *readerIdentifier;
@property (readonly, nonatomic) NSData *readerPublicKey;
@property (readonly, nonatomic) NSUUID *homeIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithReaderIdentifier:(id)a0 readerPublicKey:(id)a1 homeIdentifier:(id)a2;

@end
