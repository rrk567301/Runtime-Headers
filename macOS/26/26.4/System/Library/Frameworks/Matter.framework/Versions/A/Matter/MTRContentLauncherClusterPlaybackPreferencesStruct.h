@class NSNumber, MTRContentLauncherClusterTrackPreferenceStruct, NSArray;

@interface MTRContentLauncherClusterPlaybackPreferencesStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *playbackPosition;
@property (copy, nonatomic) MTRContentLauncherClusterTrackPreferenceStruct *textTrack;
@property (copy, nonatomic) NSArray *audioTracks;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
