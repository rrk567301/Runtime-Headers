@class DDBridgeUpdateMesh, DDBridgeUpdateTexture, DDBridgeUpdateMaterial;
@protocol MTLTexture;

@interface DDBridgeReceiver : NSObject

- (void)setTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)initWithDevice:(id)a0;
- (void)setPlaying:(BOOL)a0;
- (id)init;
- (void)setCameraDistance:(float)a0;
- (void)initRenderer:(id<MTLTexture>)a0 completionHandler:(void (^)(void))a1;
- (void)renderWithTexture:(id)a0;
- (void)updateMaterial:(DDBridgeUpdateMaterial *)a0 completionHandler:(void (^)(void))a1;
- (void)updateMesh:(DDBridgeUpdateMesh *)a0 completionHandler:(void (^)(void))a1;
- (void)updateTexture:(DDBridgeUpdateTexture *)a0 completionHandler:(void (^)(void))a1;

@end
