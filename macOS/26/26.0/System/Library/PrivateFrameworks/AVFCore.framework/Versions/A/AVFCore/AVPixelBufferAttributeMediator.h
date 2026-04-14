@interface AVPixelBufferAttributeMediator : NSObject {
    struct OpaqueVTPixelBufferAttributesMediator { } *_mediator;
}

- (void)dealloc;
- (id)init;
- (void)setLayersAreSuppressed:(BOOL)a0;
- (void)setRequestedPixelBufferAttributes:(id)a0 forKey:(id)a1;
- (id)mediatedPixelBufferAttributes;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)a0;

@end
