@class NSString, MCSong, NSURL, MPSongInternal, MPAudioPlaylist;

@interface MPSong : NSObject <NSSecureCoding, NSCopying> {
    NSString *_path;
    MCSong *_song;
    MPAudioPlaylist *_parentPlaylist;
    MPSongInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double audioVolume;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSURL *URL;

+ (id)song;
+ (id)songWithPath:(id)a0;
+ (id)songWithURL:(id)a0;

- (void)setAudioVolume:(double)a0;
- (double)stopTime;
- (long long)index;
- (id)initWithPath:(id)a0;
- (double)audioVolume;
- (void)setPath:(id)a0;
- (void)setURL:(id)a0;
- (id)path;
- (void)setStartTime:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (id)URL;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (double)duration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)startTime;
- (void)setDuration:(double)a0;
- (id)init;
- (id)objectSpecifier;
- (double)fadeOutDuration;
- (double)fadeInDuration;
- (void)setFadeInDuration:(double)a0;
- (void)setFadeOutDuration:(double)a0;
- (double)maxDuration;
- (id)song;
- (id)parentPlaylist;
- (void)setParentPlaylist:(id)a0;
- (void)setSong:(id)a0;
- (id)parentDocument;
- (void)copyStruct:(id)a0;
- (void)setInternalDuration;
- (void)setInternalStartTime;

@end
