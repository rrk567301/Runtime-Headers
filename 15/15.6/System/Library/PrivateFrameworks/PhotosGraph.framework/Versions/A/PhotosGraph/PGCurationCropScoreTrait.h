@interface PGCurationCropScoreTrait : PGCurationTrait

@property (nonatomic) double minimumSquareCropScore;

- (char)isActive;
- (id)initWithMinimumSquareCropScore:(double)a0;

@end
