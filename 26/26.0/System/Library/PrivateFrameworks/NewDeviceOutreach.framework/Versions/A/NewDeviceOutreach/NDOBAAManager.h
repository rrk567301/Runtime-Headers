@class NSArray;

@interface NDOBAAManager : NSObject

@property (retain, nonatomic) NSArray *clientCertArray;
@property (nonatomic) struct __SecKey { } *privateKey;

- (void)dealloc;
- (void).cxx_destruct;
- (id)certificatesEncodeToBase64:(id)a0 status:(id *)a1;
- (BOOL)generateBAACertficate:(id /* block */)a0;
- (id)serializeCertificateChain:(id)a0;
- (id)signDataAndEncodeToBase64:(id)a0 withPrivateKey:(struct __SecKey { } *)a1 status:(id *)a2;
- (void)writeCertsToDevice:(id)a0;
- (id)BAAAuthenticationHeadersForBody:(id)a0 error:(id *)a1;
- (BOOL)_hasEOS;
- (id)_compressCertificates:(id)a0;
- (id)_zlibCompressionForData:(id)a0;

@end
