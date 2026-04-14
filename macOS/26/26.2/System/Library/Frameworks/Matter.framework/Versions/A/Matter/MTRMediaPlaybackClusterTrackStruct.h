@class NSString, MTRMediaPlaybackClusterTrackAttributesStruct;

@interface MTRMediaPlaybackClusterTrackStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) MTRMediaPlaybackClusterTrackAttributesStruct *trackAttributes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
