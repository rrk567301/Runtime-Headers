@class NEIKEv2EncryptionProtocol, NEIKEv2IntegrityProtocol;

@interface NEIKEv2SecurityContextCBCPlusHMAC : NEIKEv2SecurityContext {
    struct { unsigned int ctx[96]; } outgoingHMACBaseContext;
    struct { unsigned int ctx[96]; } incomingHMACBaseContext;
    NEIKEv2EncryptionProtocol *_encryptionProtocol;
    NEIKEv2IntegrityProtocol *_integrityProtocol;
    struct _CCCryptor { } *_outgoingEncryptionContext;
    struct _CCCryptor { } *_incomingEncryptionContext;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)constructEncryptedPacketFromConstructor:(id)a0 plaintextLength:(unsigned int)a1 authenticatedHeaders:(id)a2;
- (id)decryptPayloadData:(id)a0 authenticatedHeaders:(id)a1;
- (unsigned int)maximumPayloadSizeWithinLimit:(unsigned int)a0;
- (unsigned int)overheadForPlaintextLength:(unsigned int)a0;

@end
