@class NSNumber;

@interface MTRMediaPlaybackClusterPlaybackPositionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *updatedAt;
@property (copy, nonatomic) NSNumber *position;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
