@interface AKAttestationSigner : NSObject

@property (class, readonly, nonatomic) AKAttestationSigner *sharedSigner;

- (id)init;
- (void)signatureForData:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)signaturesForData:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
