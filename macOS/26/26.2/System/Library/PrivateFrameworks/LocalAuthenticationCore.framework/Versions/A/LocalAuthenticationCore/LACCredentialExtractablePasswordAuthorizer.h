@interface LACCredentialExtractablePasswordAuthorizer : NSObject {
    void /* unknown type, empty encoding */ acmHelper;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ signPoster;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)checkOriginatorCanReadExtractableCredential:(id)a0 error:(id *)a1;
- (BOOL)checkOriginatorCanWriteExtractableCredential:(id)a0 error:(id *)a1;
- (id)initWithACMHelper:(id)a0;
- (id)initWithACMHelper:(id)a0 featureFlags:(id)a1 signPoster:(id)a2;

@end
