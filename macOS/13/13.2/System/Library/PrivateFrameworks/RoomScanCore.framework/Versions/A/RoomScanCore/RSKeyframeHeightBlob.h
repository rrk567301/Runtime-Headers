@interface RSKeyframeHeightBlob : NSObject <NSCopying>

@property (nonatomic) float ceilingSum;
@property (nonatomic) unsigned long long ceilingVote;
@property (nonatomic) float floorSum;
@property (nonatomic) unsigned long long floorVote;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
