@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SandboxRuntimeExtensionController : NSObject {
    NSMutableDictionary *_cachedExtensions;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (id)init;
- (void)prepareForTermination;
- (void).cxx_destruct;
- (id)makeConnection;
- (void)invalidateAllExtensionsWithCompletionHandler:(id /* block */)a0;
- (void)invalidateExtensionWithType:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)requestGenericExtensionWithType:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
