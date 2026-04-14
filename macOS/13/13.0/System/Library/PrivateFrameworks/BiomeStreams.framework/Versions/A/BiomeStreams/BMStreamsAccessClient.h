@class BMStreamsAccessAssertionCache, NSMutableDictionary, BMStreamsAccessTracker;

@interface BMStreamsAccessClient : NSObject {
    NSMutableDictionary *_accessAssertions;
    BMStreamsAccessAssertionCache *_accessAssertionCache;
    BMStreamsAccessTracker *_accessTracker;
}

+ (BOOL)checkCurrentProcessEntitlementsForWriteAccessToStreamIdentifier:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSandboxExtensionCache:(id)a0 accessTracker:(id)a1;
- (BOOL)requestReadAccessTokenForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;
- (BOOL)requestReadWriteAccessTokenForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;
- (BOOL)requestAccessToFlexibleStorage;
- (id)_newConnectionForDomain:(unsigned long long)a0;
- (void)invalidateConnection:(id)a0;
- (BOOL)_requestAccess:(unsigned long long)a0 toStreamType:(unsigned long long)a1 streamIdentifier:(id)a2;
- (BOOL)_requestAccessToFlexibleStorage;
- (BOOL)_currentProcessIsSandboxed;

@end
