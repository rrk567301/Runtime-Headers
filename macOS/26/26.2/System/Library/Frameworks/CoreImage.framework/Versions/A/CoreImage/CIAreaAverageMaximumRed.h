@interface CIAreaAverageMaximumRed : CIAreaReductionFilter

+ (id)customAttributes;

- (id)outputImage;
- (id)_reduce2X2;
- (id)_reduce4X1;
- (id)_reduce4X4;
- (id)_reduceCrop;
- (id)_reduce1X4;

@end
