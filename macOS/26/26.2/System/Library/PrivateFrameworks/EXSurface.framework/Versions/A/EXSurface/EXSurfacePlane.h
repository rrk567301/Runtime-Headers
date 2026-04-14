@class _EXSurfacePriv;

@interface EXSurfacePlane : NSObject <EXSurfaceImageLayout> {
    _EXSurfacePriv *_priv;
    unsigned long long _planeIndex;
}

@property (readonly) long long offset;
@property (readonly) long long width;
@property (readonly) long long height;
@property (readonly) long long bytesPerRow;
@property (readonly) long long bytesPerElement;
@property (readonly) long long elementWidth;
@property (readonly) long long elementHeight;
@property (readonly) void *baseAddress;

- (void).cxx_destruct;
- (void)getMutableBytesWithHandler:(id /* block */)a0;
- (id)initWithEXSurfacePriv:(id)a0 planeIndex:(unsigned long long)a1;

@end
