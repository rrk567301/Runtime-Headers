@class NSString, OITSUTemporaryDirectory;

@interface OCCDecryptor : NSObject {
    OITSUTemporaryDirectory *mTempDirectory;
    NSString *mBaseStringForOutputFilename;
    struct OCCStreamer { void /* function */ **x0; struct OCCCryptoKey *x1; char *x2; } *mStreamer;
}

@property (readonly, nonatomic) NSString *outputFilename;

+ (id)agileDescriptorNamespace;
+ (id)agilePasswordKeyEncryptorNamespace;
+ (id)allocTempFileWithBase:(id)a0 outFilename:(id *)a1 tempDirectory:(id *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (char)decrypt;
- (char)decryptIntoOutputFile;
- (void)deleteOutputFile;
- (id)initWithStreamer:(struct OCCStreamer { void /* function */ **x0; struct OCCCryptoKey *x1; char *x2; } *)a0;
- (char)isReadProtectedUsingDefaultPassphrase;
- (char)verifyPassphrase:(id)a0;

@end
