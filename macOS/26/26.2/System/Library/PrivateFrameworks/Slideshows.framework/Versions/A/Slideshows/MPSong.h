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
- (double)duration;
- (id)initWithCoder:(id)a0;
- (void)setURL:(id)a0;
- (void)setPath:(id)a0;
- (id)URL;
- (void)setDuration:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)path;
- (void)setStartTime:(double)a0;
- (id)initWithPath:(id)a0;
- (id)init;
- (double)startTime;
- (double)audioVolume;
- (void)dealloc;
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
