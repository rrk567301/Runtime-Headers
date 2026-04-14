@class NSNumber;

@interface MTRMediaPlaybackClusterPlaybackPositionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *updatedAt;
@property (copy, nonatomic) NSNumber *position;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
