@interface CIAreaAverageMaximumRed : CIAreaReductionFilter

+ (id)customAttributes;

- (id)_reduce4X1;
- (id)_reduce2X2;
- (id)outputImage;
- (id)_reduce4X4;
- (id)_reduce1X4;
- (id)_reduceCrop;

@end
