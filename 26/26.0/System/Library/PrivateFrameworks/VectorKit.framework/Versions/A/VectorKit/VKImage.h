@class NSData, NSString, VKResourceManager;

@interface VKImage : NSObject {
    struct CGImage { } *_imageRef;
    NSData *_data;
    NSString *_name;
    struct weak_ptr<mre::GraphicsResourceStore> { struct GraphicsResourceStore *__ptr_; struct __shared_weak_count *__cntrl_; } _resourceStore;
    struct TextureHandle { union { struct { unsigned int index : 32; unsigned int version : 32; } ; unsigned long long value; } ; BOOL isInternal; } _texture;
    struct shared_ptr<md::TextureAtlasRegion> { struct TextureAtlasRegion *__ptr_; struct __shared_weak_count *__cntrl_; } _textureAtlasRegion;
    struct Box<float, 2> { struct Matrix<float, 2, 1> { float _e[2]; } _minimum; struct Matrix<float, 2, 1> { float _e[2]; } _maximum; } _textureCoordinates;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _collisionRect;
    struct CGPoint { double x; double y; } _anchorPoint;
    struct CGPoint { double x; double y; } _labelingPoint;
    struct CGSize { double width; double height; } _size;
    double _scale;
    BOOL _hasCollisionRect;
    BOOL _hasAnchorPoint;
    BOOL _hasLabelingPoint;
    BOOL _usedAsTextureAndImage;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isTextureReady;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isImageReady;
    VKResourceManager *_resourceManager;
    unsigned char _imageHash[16];
}

- (struct TextureHandle { union { struct { unsigned int x0 : 32; unsigned int x1 : 32; } x0; unsigned long long x1; } x0; BOOL x1; })texture;
- (int)compareTo:(id)a0;
- (double)scale;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (void)dealloc;
- (id)initWithData:(id)a0 scale:(double)a1 usedAsTextureAndImage:(BOOL)a2 resourceStore:(struct weak_ptr<mre::GraphicsResourceStore> { struct GraphicsResourceStore *x0; struct __shared_weak_count *x1; })a3;
- (id)initWithData:(id)a0 scale:(double)a1 resourceStore:(struct weak_ptr<mre::GraphicsResourceStore> { struct GraphicsResourceStore *x0; struct __shared_weak_count *x1; })a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 resourceStore:(struct weak_ptr<mre::GraphicsResourceStore> { struct GraphicsResourceStore *x0; struct __shared_weak_count *x1; })a2;
- (void)prepareTextureWithAtlas:(struct TextureAtlas { void /* function */ **x0; } *)a0;
- (void)setCollisionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGImage { } *)image;
- (const void *)textureCoordinates;
- (struct CGPoint { double x0; double x1; })labelingPoint;
- (id)initWithName:(id)a0 scale:(double)a1 resourceManager:(id)a2 resourceStore:(struct weak_ptr<mre::GraphicsResourceStore> { struct GraphicsResourceStore *x0; struct __shared_weak_count *x1; })a3;
- (id).cxx_construct;
- (void)setLabelingPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_prepareTextureWithAtlas:(struct TextureAtlas { void /* function */ **x0; } *)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 usedAsTextureAndImage:(BOOL)a2 resourceStore:(struct weak_ptr<mre::GraphicsResourceStore> { struct GraphicsResourceStore *x0; struct __shared_weak_count *x1; })a3;
- (void)_prepareImage;
- (struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })collisionRect;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
