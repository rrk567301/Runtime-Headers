@class NSArray, NSString, NSOperationQueue, NSObject, MABAACertManager;
@protocol OS_dispatch_queue;

@interface MAKeyManagerDownloadSessionDelegate : NSObject <NSURLSessionDownloadDelegate>

@property (readonly, retain, nonatomic) MABAACertManager *baaCertManager;
@property (copy) NSArray *certArray;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *refKey;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *underlyingQueue;
@property (readonly, retain, nonatomic) NSOperationQueue *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)dealloc;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyKeyAndBAACerificateChain:(id *)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyKeyAndSelfSignedCertificateChain:(id *)a0;
- (id)initWithName:(id)a0 certType:(int)a1;
- (void)refreshBAACertificate;

@end
