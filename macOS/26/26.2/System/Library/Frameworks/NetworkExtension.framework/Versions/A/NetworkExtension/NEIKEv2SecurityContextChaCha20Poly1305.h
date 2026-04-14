@interface NEIKEv2SecurityContextChaCha20Poly1305 : NEIKEv2SecurityContext {
    struct { struct { unsigned int state[16]; unsigned char buffer[64]; unsigned long long leftover; } chacha20_ctx; struct { unsigned int r0; unsigned int r1; unsigned int r2; unsigned int r3; unsigned int r4; unsigned int s1; unsigned int s2; unsigned int s3; unsigned int s4; unsigned int h0; unsigned int h1; unsigned int h2; unsigned int h3; unsigned int h4; unsigned char buf[16]; unsigned long long buf_used; unsigned char key[16]; } poly1305_ctx; unsigned long long aad_nbytes; unsigned long long text_nbytes; unsigned char state; } outgoingEncryptionContext;
    struct { struct { unsigned int state[16]; unsigned char buffer[64]; unsigned long long leftover; } chacha20_ctx; struct { unsigned int r0; unsigned int r1; unsigned int r2; unsigned int r3; unsigned int r4; unsigned int s1; unsigned int s2; unsigned int s3; unsigned int s4; unsigned int h0; unsigned int h1; unsigned int h2; unsigned int h3; unsigned int h4; unsigned char buf[16]; unsigned long long buf_used; unsigned char key[16]; } poly1305_ctx; unsigned long long aad_nbytes; unsigned long long text_nbytes; unsigned char state; } incomingEncryptionContext;
    unsigned char outgoingEncryptionSalt[4];
    unsigned char incomingEncryptionSalt[4];
    unsigned long long _currentOutgoingIV;
}

- (void)dealloc;
- (id)constructEncryptedPacketFromConstructor:(id)a0 plaintextLength:(unsigned int)a1 authenticatedHeaders:(id)a2;
- (id)decryptPayloadData:(id)a0 authenticatedHeaders:(id)a1;

@end
