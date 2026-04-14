@class NSString, MTRMediaPlaybackClusterTrackAttributesStruct;

@interface MTRMediaPlaybackClusterTrackStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) MTRMediaPlaybackClusterTrackAttributesStruct *trackAttributes;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
