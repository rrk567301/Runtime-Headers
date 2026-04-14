@interface VFXExternalDrawCall : NSObject {
    void /* unknown type, empty encoding */ aabb;
    void /* unknown type, empty encoding */ opaque;
    void /* unknown type, empty encoding */ isDepthOnly;
    void /* unknown type, empty encoding */ drawCallEncoder;
}

@property (nonatomic, readonly) id /* block */ encoder;
@property (nonatomic, readonly) BOOL hasCustomHandler;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isOpaque;
- (void /* unknown type, empty encoding */)boundingBoxMax;
- (void /* unknown type, empty encoding */)boundingBoxMin;
- (BOOL)depthOnly;

@end
