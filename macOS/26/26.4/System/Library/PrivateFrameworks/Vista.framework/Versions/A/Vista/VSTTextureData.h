@class IOSurface;

@interface VSTTextureData : NSObject {
    struct shared_ptr<vst::splat::TextureData> { struct TextureData *__ptr_; struct __shared_weak_count *__cntrl_; } _textureData;
}

@property (readonly, nonatomic) void *internalTextureData;
@property (readonly, nonatomic) IOSurface *surface;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ size;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initFromIOSurfaceInfo:(id)a0;
- (id)initWithInternalTextureData:(const void *)a0;

@end
