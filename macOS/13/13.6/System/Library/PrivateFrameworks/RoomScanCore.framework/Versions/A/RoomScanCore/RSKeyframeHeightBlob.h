@interface RSKeyframeHeightBlob : NSObject <NSCopying>

@property (nonatomic) float ceilingSum;
@property (nonatomic) unsigned long long ceilingVote;
@property (nonatomic) float floorSum;
@property (nonatomic) unsigned long long floorVote;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
