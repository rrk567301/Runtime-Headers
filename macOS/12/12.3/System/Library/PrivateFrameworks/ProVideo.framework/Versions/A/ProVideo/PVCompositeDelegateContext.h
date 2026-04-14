@class PVColorSpace, PVInstructionGraphSourceNode;

@interface PVCompositeDelegateContext : NSObject

@property (readonly, weak, nonatomic) PVInstructionGraphSourceNode *sourceNode;
@property (readonly, nonatomic) id preprocessData;
@property (readonly, nonatomic) PVColorSpace *renderingColorSpace;

- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)setPreprocessData:(id)a0;
- (void)setRenderColorSpace:(id)a0;

@end
