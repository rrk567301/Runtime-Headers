@interface AVPixelBufferAttributeMediator : NSObject {
    struct OpaqueVTPixelBufferAttributesMediator { } *_mediator;
}

- (void)dealloc;
- (id)init;
- (void)setRequestedPixelBufferAttributes:(id)a0 forKey:(id)a1;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)a0;
- (void)setLayersAreSuppressed:(BOOL)a0;
- (id)mediatedPixelBufferAttributes;

@end
