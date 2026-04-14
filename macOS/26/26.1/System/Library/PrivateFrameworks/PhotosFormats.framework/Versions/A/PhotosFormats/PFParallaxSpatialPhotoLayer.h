@class NSData;
@protocol PFParallaxSpatialPhotoScene;

@interface PFParallaxSpatialPhotoLayer : PFParallaxLayer

@property (readonly, nonatomic) NSData *sceneData;
@property (readonly, nonatomic) id<PFParallaxSpatialPhotoScene> scene;
@property (readonly, nonatomic) NSData *dataRepresentation;
@property (weak, nonatomic) id sharedScene;

+ (id)fileExtension;

- (struct CGSize { double x0; double x1; })pixelSize;
- (id)fileExtension;
- (void).cxx_destruct;
- (BOOL)saveToURL:(id)a0 error:(id *)a1;
- (id)initWithSceneData:(id)a0 scene:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 zPosition:(double)a3 identifier:(id)a4;
- (id)layerByUpdatingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
