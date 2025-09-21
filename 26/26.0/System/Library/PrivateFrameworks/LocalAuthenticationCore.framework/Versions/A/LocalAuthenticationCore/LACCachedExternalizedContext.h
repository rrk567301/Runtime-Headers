@class NSData;
@protocol LACContextExternalizing, LACContextExternalizationObserving;

@interface LACCachedExternalizedContext : NSObject {
    id<LACContextExternalizing> _externalizationDelegate;
}

@property (retain) NSData *cachedExternalizedContext;
@property (readonly, nonatomic) NSData *externalizedContext;
@property (weak, nonatomic) id<LACContextExternalizationObserving> externalizationObserver;

- (id)initWithExternalizedContext:(id)a0;
- (void)externalizedContextWithReply:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithExternalizationDelegate:(id)a0;
- (void)invalidateBecauseOfInvalidConnection:(BOOL)a0;
- (id)externalizedContextWithError:(id *)a0;

@end
