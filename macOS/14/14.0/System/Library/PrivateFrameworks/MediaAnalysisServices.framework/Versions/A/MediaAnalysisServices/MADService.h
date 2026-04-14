@class Protocol, NSString, NSSet, NSXPCConnection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MADService : NSObject <MADServiceProtocol, VCPMediaAnalysisClientProtocol> {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_connection;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _requestID;
    NSObject<OS_dispatch_queue> *_progressHandlerQueue;
    NSMutableDictionary *_progressHandlers;
    NSObject<OS_dispatch_queue> *_resultHandlerQueue;
    NSMutableDictionary *_resultHandlers;
}

@property (class, readonly, nonatomic) NSString *serviceName;
@property (class, readonly, nonatomic) Protocol *serverProtocol;
@property (class, readonly, nonatomic) NSSet *allowedClasses;
@property (class, readonly, nonatomic) NSSet *allowedVideoRequestClasses;
@property (class, readonly, nonatomic) NSSet *allowedVideoResultClasses;

+ (id)service;
+ (BOOL)isEntitled;
+ (void)configureServerInterface:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (id)initInternal;
- (void)cancelAllRequests;
- (int)performRequests:(id)a0 onCGImage:(struct CGImage { } *)a1 withOrientation:(unsigned int)a2 andIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (int)performRequests:(id)a0 onImageURL:(id)a1 withIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)cancelRequestID:(int)a0;
- (int)performRequests:(id)a0 onCIImage:(id)a1 withOrientation:(unsigned int)a2 andIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (int)performRequests:(id)a0 assetLocalIdentifier:(id)a1 photoLibraryURL:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (int)performRequests:(id)a0 onAssetWithLocalIdentifier:(id)a1 fromPhotoLibraryWithURL:(id)a2 completionHandler:(id /* block */)a3;
- (int)performRequests:(id)a0 videoURL:(id)a1 identifier:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)userSafetyEnabled:(id *)a0;
- (BOOL)performRequests:(id)a0 onImageData:(id)a1 withUniformTypeIdentifier:(id)a2 andIdentifier:(id)a3 error:(id *)a4;
- (void)cacheHitWithQueryID:(unsigned long long)a0 cachedResultQueryID:(unsigned long long)a1;
- (void)cacheHitWithQueryID:(unsigned long long)a0 cachedResultQueryID:(unsigned long long)a1 engagementSuggestionType:(id)a2;
- (void)endEntryPoint;
- (void)handleResult:(id)a0 atRequestIdx:(unsigned long long)a1 forRequestID:(int)a2;
- (void)reportProgress:(double)a0 forRequest:(int)a1;
- (void)resetPerformanceMeasurements;
- (void)startEntryPointWithQueryID:(unsigned long long)a0;
- (void)startEntryPointWithQueryID:(unsigned long long)a0 andEvent:(unsigned long long)a1;
- (int)_performRequests:(id)a0 onIOSurface:(id)a1 withOrientation:(unsigned int)a2 assetLocalIdentifier:(id)a3 photoLibraryURL:(id)a4 completionHandler:(id /* block */)a5;
- (void)addProgressHandler:(id /* block */)a0 forRequestID:(int)a1;
- (void)addResultHandler:(id /* block */)a0 forRequestID:(int)a1;
- (unsigned long long)currentOutstandingTasks;
- (BOOL)performRequests:(id)a0 assetLocalIdentifier:(id)a1 photoLibraryURL:(id)a2 error:(id *)a3;
- (int)performRequests:(id)a0 assetLocalIdentifier:(id)a1 photoLibraryURL:(id)a2 progressHandler:(id /* block */)a3 resultHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (int)performRequests:(id)a0 onAssetWithCloudIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (int)performRequests:(id)a0 onAssetWithIdentifier:(id)a1 identifierType:(unsigned long long)a2 fromPhotoLibraryWithURL:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)performRequests:(id)a0 onAssetWithIdentifier:(id)a1 identifierType:(unsigned long long)a2 fromPhotoLibraryWithURL:(id)a3 error:(id *)a4;
- (BOOL)performRequests:(id)a0 onAssetWithSyndicationIdentifier:(id)a1 error:(id *)a2;
- (int)performRequests:(id)a0 onCGImage:(struct CGImage { } *)a1 withOrientation:(unsigned int)a2 assetLocalIdentifier:(id)a3 photoLibraryURL:(id)a4 completionHandler:(id /* block */)a5;
- (int)performRequests:(id)a0 onImageData:(id)a1 withUniformTypeIdentifier:(id)a2 andIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (int)performRequests:(id)a0 onImageURL:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)performRequests:(id)a0 onImageURL:(id)a1 withIdentifier:(id)a2 error:(id *)a3;
- (int)performRequests:(id)a0 onPixelBuffer:(struct __CVBuffer { } *)a1 withOrientation:(unsigned int)a2 andIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (int)performRequests:(id)a0 onPixelBuffer:(struct __CVBuffer { } *)a1 withOrientation:(unsigned int)a2 assetLocalIdentifier:(id)a3 photoLibraryURL:(id)a4 completionHandler:(id /* block */)a5;
- (int)performRequests:(id)a0 onPixelBuffer:(struct __CVBuffer { } *)a1 withOrientation:(unsigned int)a2 completionHandler:(id /* block */)a3;
- (int)performRequestsWithCloudIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)queryPerformanceMeasurements;
- (void)removeProgressHandlerForRequestID:(int)a0;
- (void)removeResultHandlerForRequestID:(int)a0;
- (id)sandboxExtensionForURL:(id)a0 error:(id *)a1;

@end
