@interface AVPixelBufferAttributeMediator : NSObject {
    struct OpaqueVTPixelBufferAttributesMediator { } *_mediator;
}

- (void)setRequestedPixelBufferAttributes:(id)a0 forKey:(id)a1;
- (id)init;
- (void)setLayersAreSuppressed:(BOOL)a0;
- (id)mediatedPixelBufferAttributes;
- (void)dealloc;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)a0;

@end
