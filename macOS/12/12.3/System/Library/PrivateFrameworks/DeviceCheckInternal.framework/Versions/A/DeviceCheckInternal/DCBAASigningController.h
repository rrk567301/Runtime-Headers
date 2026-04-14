@interface DCBAASigningController : NSObject

- (void)baaSignaturesForData:(id)a0 completion:(id /* block */)a1;
- (void)baaSignatureForData:(id)a0 completion:(id /* block */)a1;
- (BOOL)supportsUCRTAttesation;

@end
