@class NSString, MTRMediaPlaybackClusterTrackAttributesStruct;

@interface MTRMediaPlaybackClusterTrackStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) MTRMediaPlaybackClusterTrackAttributesStruct *trackAttributes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
