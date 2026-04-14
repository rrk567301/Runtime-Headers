@class NSData;

@interface PKPassAuxiliaryCapabilitySignatureUnifiedAccessHomeKeyCreationMetadata : PKPassAuxiliaryCapabilityKeyCreationMetadata

@property (readonly, nonatomic) NSData *readerIdentifier;
@property (readonly, nonatomic) NSData *readerPublicKey;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithReaderIdentifier:(id)a0 readerPublicKey:(id)a1;

@end
