@class DCContext;
@protocol DCCryptoProxy;

@interface DCDDeviceMetadata : NSObject {
    id<DCCryptoProxy> _cryptoProxy;
    DCContext *_context;
}

- (void).cxx_destruct;
- (void)baaSignaturesForData:(id)a0 completion:(id /* block */)a1;
- (void)baaSignatureForData:(id)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0 cryptoProxy:(id)a1;
- (void)generateEncryptedBlobWithCompletion:(id /* block */)a0;

@end
