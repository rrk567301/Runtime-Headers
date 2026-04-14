@class NSMutableData;

@interface NEIKEv2SecurityContextAESGCM : NEIKEv2SecurityContext {
    unsigned char incomingEncryptionSalt[4];
    NSMutableData *_outgoingEncryptionContext;
    NSMutableData *_incomingEncryptionContext;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)constructEncryptedPacketFromConstructor:(id)a0 plaintextLength:(unsigned int)a1 authenticatedHeaders:(id)a2;
- (id)decryptPayloadData:(id)a0 authenticatedHeaders:(id)a1;

@end
