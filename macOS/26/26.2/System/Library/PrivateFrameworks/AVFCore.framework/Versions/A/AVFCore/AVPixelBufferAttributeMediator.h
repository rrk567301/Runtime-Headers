@interface AVPixelBufferAttributeMediator : NSObject {
    struct OpaqueVTPixelBufferAttributesMediator { } *_mediator;
}

- (void)setRequestedPixelBufferAttributes:(id)a0 forKey:(id)a1;
- (void)setLayersAreSuppressed:(BOOL)a0;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)a0;
- (id)init;
- (id)mediatedPixelBufferAttributes;
- (void)dealloc;

@end
