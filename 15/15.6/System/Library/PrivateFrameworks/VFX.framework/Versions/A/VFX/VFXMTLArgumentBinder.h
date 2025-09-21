@interface VFXMTLArgumentBinder : NSObject {
    id /* block */ _block;
    int _frequency;
    char _needsRenderResource;
}

- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0 frequency:(int)a1 needsRenderResource:(char)a2;

@end
