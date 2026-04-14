@interface TSCH3DSceneRenderSetup : NSObject

+ (id)null;
+ (id)viewport;
+ (id)identity;
+ (id)camera;
+ (id)full;
+ (id)sceneTransform;
+ (id)cameraAndSceneTransform;

- (id)renderingCameraFromOriginalCamera:(id)a0 pipeline:(id)a1;

@end
