@class NEIKEv2KEMProtocol, NSArray, NSDictionary, NSSet, NEIKEv2SPI, NEIKEv2EncryptionProtocol, NEIKEv2IntegrityProtocol;

@interface NEIKEv2ChildSAProposal : NSObject <NEPrettyDescription, NSCopying> {
    unsigned char _proposalNumber;
    BOOL _noESNTransformPresent;
    NSDictionary *_chosenAdditionalKEMProtocols;
    NSSet *_unsupportedTransformTypes;
    NEIKEv2SPI *_spi;
    NEIKEv2SPI *_remoteSPI;
    NEIKEv2EncryptionProtocol *_chosenEncryptionProtocol;
    NEIKEv2IntegrityProtocol *_chosenIntegrityProtocol;
    NEIKEv2KEMProtocol *_chosenKEMProtocol;
    NSArray *_chosenAdditionalKETransforms;
}

@property unsigned long long protocol;
@property (retain) NSArray *encryptionProtocols;
@property (retain) NSArray *integrityProtocols;
@property (retain) NSArray *kemProtocols;
@property (retain) NSDictionary *additionalKEMProtocols;
@property unsigned long long lifetimeSeconds;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (id)initWithProtocol:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
