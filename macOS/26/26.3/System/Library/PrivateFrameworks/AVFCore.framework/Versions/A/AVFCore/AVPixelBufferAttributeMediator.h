@interface AVPixelBufferAttributeMediator : NSObject {
    struct OpaqueVTPixelBufferAttributesMediator { } *_mediator;
}

- (id)init;
- (void)setRequestedPixelBufferAttributes:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)mediatedPixelBufferAttributes;
- (void)setLayersAreSuppressed:(BOOL)a0;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)a0;

@end
