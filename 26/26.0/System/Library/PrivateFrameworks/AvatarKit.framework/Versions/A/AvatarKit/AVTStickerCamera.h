@class VFXNode;

@interface AVTStickerCamera : NSObject

@property (retain, nonatomic) VFXNode *node;

+ (id)cameraFromDictionary:(id)a0 assetsPath:(id)a1;
+ (id)stickerCameraCache;

- (void).cxx_destruct;
- (id)buildNode;
- (id)initWithCameraNode:(id)a0;

@end
