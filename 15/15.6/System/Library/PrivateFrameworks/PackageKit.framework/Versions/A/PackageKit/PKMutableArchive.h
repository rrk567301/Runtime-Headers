@interface PKMutableArchive : PKArchive

- (char)addIntermediateCertificate:(struct __SecCertificate { } *)a0;
- (char)addSignatureBySigningWithIdentity:(struct __SecIdentity { } *)a0 algorithm:(id)a1;
- (char)addSignatureBySigningWithIdentity:(struct __SecIdentity { } *)a0 algorithm:(id)a1 usingTSAIfSupported:(char)a2;
- (id)initForWritingToPath:(id)a0 error:(id *)a1;
- (id)initForWritingToPath:(id)a0 ofType:(id)a1 error:(id *)a2;
- (char)setContentsOfArchive:(id)a0 forPath:(id)a1;
- (char)setData:(id)a0 forPath:(id)a1 compressed:(char)a2;
- (char)setFile:(id)a0 forPath:(id)a1 compressed:(char)a2;
- (void)setSignatureSize:(int)a0;

@end
