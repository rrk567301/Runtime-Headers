@interface AAAttestationSigner : NSObject

@property (class, readonly) AAAttestationSigner *sharedSigner;

- (id)init;
- (void)signatureForData:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)signaturesForDatas:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
