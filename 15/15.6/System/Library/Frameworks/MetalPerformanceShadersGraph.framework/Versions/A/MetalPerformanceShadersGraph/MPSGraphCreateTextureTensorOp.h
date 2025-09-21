@interface MPSGraphCreateTextureTensorOp : MPSGraphOperation

@property (readonly, nonatomic) unsigned long long mtlPixelFormat;
@property (readonly, nonatomic) char compressed;

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 pixelFormat:(unsigned long long)a3 isCompressed:(char)a4 name:(id)a5;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(char)a3 name:(id)a4;

@end
