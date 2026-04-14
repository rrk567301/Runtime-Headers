@class ADImageDescriptor;

@interface ADVisualDepthMetalDescriptor : NSObject

@property (readonly, nonatomic) ADImageDescriptor *primaryColorInput;
@property (readonly, nonatomic) ADImageDescriptor *secondaryColorInput;
@property (readonly, nonatomic) ADImageDescriptor *primaryRasterizedMeshInput;
@property (readonly, nonatomic) ADImageDescriptor *secondaryRasterizedMeshInput;
@property (readonly, nonatomic) ADImageDescriptor *primaryPredictionOutput;
@property (readonly, nonatomic) ADImageDescriptor *secondaryPredictionOutput;
@property (readonly, nonatomic) ADImageDescriptor *primaryPredictionConfidenceOutput;
@property (readonly, nonatomic) ADImageDescriptor *secondaryPredictionConfidenceOutput;
@property (readonly, nonatomic) ADImageDescriptor *primaryOcclusionMapOutput;
@property (readonly, nonatomic) ADImageDescriptor *secondaryOcclusionMapOutput;

- (void).cxx_destruct;
- (id)initWithColorInputSize:(struct CGSize { double x0; double x1; })a0 colorInputFormat:(unsigned int)a1 rasterizedMeshInputSize:(struct CGSize { double x0; double x1; })a2 occlusionSize:(struct CGSize { double x0; double x1; })a3 povcSize:(struct CGSize { double x0; double x1; })a4 predictsDisparity:(BOOL)a5;

@end
