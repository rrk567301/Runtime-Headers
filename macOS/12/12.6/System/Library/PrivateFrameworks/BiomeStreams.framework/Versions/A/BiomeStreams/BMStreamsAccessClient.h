@class BMStreamsAccessAssertionCache, NSMutableDictionary, NSXPCListenerEndpoint, BMStreamsAccessTracker;

@interface BMStreamsAccessClient : NSObject {
    NSMutableDictionary *_accessAssertions;
    BMStreamsAccessAssertionCache *_accessAssertionCache;
    BMStreamsAccessTracker *_accessTracker;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)newConnection;
- (BOOL)requestReadAccessTokenForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;
- (BOOL)requestReadWriteAccessTokenForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;
- (id)initWithSandboxExtensionCache:(id)a0 accessTracker:(id)a1 listenerEndpoint:(id)a2;
- (BOOL)_requestAccess:(unsigned long long)a0 toStreamType:(unsigned long long)a1 streamIdentifier:(id)a2;
- (BOOL)_currentProcessIsSandboxed;
- (void)invalidateConnection:(id)a0;
- (BOOL)requestDSLWriteAccess;

@end
