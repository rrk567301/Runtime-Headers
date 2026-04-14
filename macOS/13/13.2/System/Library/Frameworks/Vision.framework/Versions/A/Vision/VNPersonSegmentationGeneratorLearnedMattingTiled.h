@interface VNPersonSegmentationGeneratorLearnedMattingTiled : VNPersonSegmentationGeneratorLearnedMatting

+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (BOOL)supportsTiling;

- (struct BufferSize { unsigned long long x0; unsigned long long x1; })outputMaskSize;
- (struct BufferSize { unsigned long long x0; unsigned long long x1; })calculateNumberOfTilesForNetworkInputImageSize:(struct BufferSize { unsigned long long x0; unsigned long long x1; })a0 networkInputMaskSize:(struct BufferSize { unsigned long long x0; unsigned long long x1; })a1 networkOutputMaskSize:(struct BufferSize { unsigned long long x0; unsigned long long x1; })a2 rotated:(BOOL)a3;

@end
