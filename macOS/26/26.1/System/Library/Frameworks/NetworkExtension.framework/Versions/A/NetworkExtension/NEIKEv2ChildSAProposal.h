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

- (id)initWithProtocol:(unsigned long long)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
