@class NSCache;

@interface ICCertificateCache : NSObject {
    NSCache *_cache;
}

@property (class, readonly, nonatomic) ICCertificateCache *shared;

- (id)init;
- (void).cxx_destruct;
- (void)enqueueCertificateRequest:(id)a0 isSAP:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)getDataForCertificateRequest:(id)a0 isSAP:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)getDataForCertificateRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getDataForSAPCertificateRequest:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
