@class NSMapTable;
@protocol MTLFunction, MTLDevice;

@interface PGDisplayPipelineCache : NSObject {
    id<MTLDevice> _mtlDevice;
    id<MTLFunction> _vertexFunction;
    id<MTLFunction> _fragmentFunction;
    id<MTLFunction> _fragmentFunctionGammaColorMatrix;
    NSMapTable *_table;
}

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (id)pipelineForDescriptor:(id)a0;

@end
