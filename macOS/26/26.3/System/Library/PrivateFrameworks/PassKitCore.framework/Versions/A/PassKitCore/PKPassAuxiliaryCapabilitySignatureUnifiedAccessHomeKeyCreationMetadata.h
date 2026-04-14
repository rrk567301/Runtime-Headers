@class NSData;

@interface PKPassAuxiliaryCapabilitySignatureUnifiedAccessHomeKeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) NSData *readerIdentifier;
@property (readonly, nonatomic) NSData *readerPublicKey;

+ (BOOL)supportsSecureCoding;

- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithReaderIdentifier:(id)a0 readerPublicKey:(id)a1;

@end
