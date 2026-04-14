@protocol MTLDevice;

@interface DDBridgeReceiver : NSObject {
    void /* unknown type, empty encoding */ dispatchSerialQueue;
}

@property (nonatomic, readonly) id<MTLDevice> device;

- (id)initWithDevice:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updateMaterialAsync:(id)a0 identifier:(id)a1;
- (BOOL)addMaterial:(id)a0 identifier:(id)a1;
- (void)addMaterialAsync:(id)a0 identifier:(id)a1;
- (BOOL)addMesh:(id)a0 identifier:(id)a1;
- (BOOL)addTexture:(id)a0 identifier:(id)a1;
- (void)addTextureAsync:(id)a0 identifier:(id)a1;
- (void)renderWithTexture:(id)a0;
- (void)updateMaterial:(id)a0 identifier:(id)a1;
- (void)updateMesh:(id)a0 identifier:(id)a1;
- (void)updateMeshAsync:(id)a0 identifier:(id)a1;
- (void)updateTexture:(id)a0 identifier:(id)a1;
- (void)updateTextureAsync:(id)a0 identifier:(id)a1;

@end
