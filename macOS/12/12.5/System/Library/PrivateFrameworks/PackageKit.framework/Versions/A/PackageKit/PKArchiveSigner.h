@class NSString;

@interface PKArchiveSigner : NSObject {
    NSString *_algorithmType;
    struct __SecKey { } *_privateKeyRef;
    struct _CMSEncoder { } *_encoder;
    struct __CFDictionary { } *_tsaContext;
    int _signatureSize;
}

- (void)dealloc;
- (void)setSignatureSize:(int)a0;
- (int)signatureSize;
- (id)initWithSigningIdentity:(struct __SecIdentity { } *)a0 algorithm:(id)a1 usingTSAIfSupported:(BOOL)a2;
- (id)signatureDataBySigningData:(id)a0;

@end
