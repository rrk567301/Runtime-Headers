@class NSNumber;

@interface MTRMediaPlaybackClusterPlaybackPosition : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *updatedAt;
@property (copy, nonatomic) NSNumber *position;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
