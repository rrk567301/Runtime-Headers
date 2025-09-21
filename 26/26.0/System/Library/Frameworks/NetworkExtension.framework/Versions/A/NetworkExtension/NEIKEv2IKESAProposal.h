@class NSArray, NEIKEv2KEMProtocol, NSSet, NEIKEv2EncryptionProtocol, NSDictionary, NEIKEv2IntegrityProtocol, NEIKEv2IKESPI, NEIKEv2PRFProtocol, NEIKEv2AuthenticationProtocol;

@interface NEIKEv2IKESAProposal : NSObject <NEPrettyDescription, NSCopying> {
    unsigned char _proposalNumber;
    NSDictionary *_chosenAdditionalKEMProtocols;
    NSSet *_unsupportedTransformTypes;
    NEIKEv2IKESPI *_spi;
    NEIKEv2IKESPI *_remoteSPI;
    NEIKEv2EncryptionProtocol *_chosenEncryptionProtocol;
    NEIKEv2IntegrityProtocol *_chosenIntegrityProtocol;
    NEIKEv2PRFProtocol *_chosenPRFProtocol;
    NEIKEv2KEMProtocol *_chosenKEMProtocol;
    NSArray *_chosenAdditionalKETransforms;
    NEIKEv2AuthenticationProtocol *_authenticationProtocol;
}

@property (retain) NSArray *encryptionProtocols;
@property (retain) NSArray *integrityProtocols;
@property (retain) NSArray *prfProtocols;
@property (retain) NSArray *kemProtocols;
@property (retain) NSDictionary *additionalKEMProtocols;
@property (retain) NSArray *eapProtocols;
@property unsigned long long lifetimeSeconds;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
