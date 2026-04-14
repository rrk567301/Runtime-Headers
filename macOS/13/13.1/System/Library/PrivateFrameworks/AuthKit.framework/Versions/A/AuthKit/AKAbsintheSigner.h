@class NSDate;

@interface AKAbsintheSigner : NSObject {
    struct NACContextOpaque_ { } *_context;
    NSDate *_contextCreationDate;
}

+ (id)sharedSigner;

- (void)dealloc;
- (void).cxx_destruct;
- (id)signatureForURLRequest:(id)a0;
- (void)signatureForURLRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_generateSignatureForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_createSigningContextWithCompletionHandler:(id /* block */)a0;
- (id)_sessionInfoFromCertificateData:(id)a0;
- (void)_establishSessionWithInfo:(id)a0 sessionURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)_destroySigningContext;
- (BOOL)_didSigningContextExpire;

@end
