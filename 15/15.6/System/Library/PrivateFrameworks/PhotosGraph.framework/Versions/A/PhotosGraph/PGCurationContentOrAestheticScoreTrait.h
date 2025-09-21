@interface PGCurationContentOrAestheticScoreTrait : PGCurationTrait

@property (nonatomic) double minimumAestheticScore;

- (char)isActive;
- (id)initWithMinimumContentScore:(double)a0 minimumAestheticScore:(double)a1;

@end
