@class NSString;

@interface MSVLyricsAudioAttributes : NSObject

@property (nonatomic) double lyricsOffset;
@property (copy, nonatomic) NSString *role;
@property (nonatomic, getter=isSpatialRole) char spatialRole;

- (void).cxx_destruct;

@end
