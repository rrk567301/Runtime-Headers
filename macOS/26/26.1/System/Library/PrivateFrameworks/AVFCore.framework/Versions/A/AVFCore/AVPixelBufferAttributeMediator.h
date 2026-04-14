@interface AVPixelBufferAttributeMediator : NSObject {
    struct OpaqueVTPixelBufferAttributesMediator { } *_mediator;
}

- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)a0;
- (id)mediatedPixelBufferAttributes;
- (void)dealloc;
- (void)setLayersAreSuppressed:(BOOL)a0;
- (void)setRequestedPixelBufferAttributes:(id)a0 forKey:(id)a1;
- (id)init;

@end
