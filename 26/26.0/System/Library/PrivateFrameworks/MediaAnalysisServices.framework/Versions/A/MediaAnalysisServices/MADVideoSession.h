@class MADVideoSessionPixelBufferPool, MADPixelBufferProcesser, NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MADVideoSession : NSObject <MADVideoSessionClientProtocol> {
    NSMutableArray *_requests;
    MADPixelBufferProcesser *_pixelBufferProcessor;
    MADVideoSessionPixelBufferPool *_pool;
    NSObject<OS_dispatch_queue> *_requestsManagementQueue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_connection;
}

+ (id)serverProtocol;
+ (id)session;
+ (id)serviceName;
+ (void)configureServerInterface:(id)a0;
+ (id)allowedRequestTTRNotificationClasses;
+ (id)allowedResultClasses;
+ (BOOL)enabledQRCodeDetection;
+ (BOOL)enabledVideoSessionXPC;
+ (BOOL)isValidRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameWidth:(int)a1 frameHeight:(int)a2;

- (void)dealloc;
- (id)init;
- (id)initInternal;
- (BOOL)removeRequest:(id)a0;
- (id)connection;
- (void).cxx_destruct;
- (void)removeAllRequests;
- (BOOL)addRequest:(id)a0 error:(id *)a1;
- (BOOL)processPixelBuffer:(struct __CVBuffer { } *)a0 frameProperties:(id)a1 resultHandler:(id /* block */)a2;
- (BOOL)processPixelBuffer:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 orientation:(unsigned int)a2 resultHandler:(id /* block */)a3;
- (void)requestTTRNotificationWithVideoFrames:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)_addBackRequestsAfterReconnection;
- (BOOL)_removeLocalRequest:(id)a0;
- (BOOL)hasOnlyOneSafetyRquest;
- (int)preprocessPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 output:(struct __CVBuffer **)a3 isProcessed:(BOOL *)a4;

@end
