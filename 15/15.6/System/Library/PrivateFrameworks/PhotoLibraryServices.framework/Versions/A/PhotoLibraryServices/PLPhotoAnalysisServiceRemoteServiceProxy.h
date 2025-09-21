@class PLPhotoAnalysisServiceClientSideService, NSXPCInterface;

@interface PLPhotoAnalysisServiceRemoteServiceProxy : NSObject {
    PLPhotoAnalysisServiceClientSideService *_service;
    NSXPCInterface *_remoteInterface;
    char _synchronous;
    id /* block */ _errorHandler;
}

- (char)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0 remoteInterface:(id)a1 synchronous:(char)a2 errorHandler:(id /* block */)a3;

@end
