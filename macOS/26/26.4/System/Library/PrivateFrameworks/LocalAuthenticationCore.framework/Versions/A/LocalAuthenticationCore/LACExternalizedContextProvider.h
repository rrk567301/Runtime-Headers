@class NSData;
@protocol LACContextExternalizing, LACContextExternalizationObserving;

@interface LACExternalizedContextProvider : NSObject {
    id<LACContextExternalizing> _externalizer;
}

@property (retain) NSData *cachedExternalizedContext;
@property (readonly, nonatomic) NSData *externalizedContext;
@property (weak, nonatomic) id<LACContextExternalizationObserving> externalizationObserver;

- (void)externalizedContextWithReply:(id /* block */)a0;
- (id)initWithExternalizedContext:(id)a0;
- (void).cxx_destruct;
- (id)externalizedContextWithError:(id *)a0;
- (id)initWithExternalizer:(id)a0;
- (void)invalidateBecauseOfInvalidConnection:(BOOL)a0;

@end
