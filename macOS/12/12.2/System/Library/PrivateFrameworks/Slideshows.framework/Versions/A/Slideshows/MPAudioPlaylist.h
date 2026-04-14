@class NSObject, MCMontage, MCAudioPlaylist, NSMutableDictionary, MPPlaylistInternal, MCPlug, NSMutableArray;
@protocol MPAudioSupport;

@interface MPAudioPlaylist : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_songs;
    MCAudioPlaylist *_audioPlaylist;
    MCPlug *_plug;
    NSObject<MPAudioSupport> *_parentObject;
    MCMontage *_montage;
    NSMutableDictionary *_attributes;
    MPPlaylistInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property double fadeInDuration;
@property double fadeOutDuration;
@property double duckInDuration;
@property double duckOutDuration;
@property double duckLevel;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)audioPlaylist;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cleanup;
- (double)duration;
- (void)setDuration:(double)a0;
- (void)setParentObject:(id)a0;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (void)setFadeInDuration:(double)a0;
- (void)setFadeOutDuration:(double)a0;
- (id)montage;
- (void)setMontage:(id)a0;
- (id)parentDocument;
- (id)songs;
- (id)audioPlaylist;
- (double)duckInDuration;
- (void)setDuckInDuration:(double)a0;
- (double)duckOutDuration;
- (void)setDuckOutDuration:(double)a0;
- (double)duckLevel;
- (void)setDuckLevel:(double)a0;
- (void)copySongs:(id)a0;
- (void)copyStruct:(id)a0;
- (void)insertSongs:(id)a0 atIndex:(long long)a1;
- (void)removeSongsAtIndices:(id)a0;
- (void)addSong:(id)a0;
- (void)addSongs:(id)a0;
- (void)removeAllSongs;
- (void)moveSongsFromIndices:(id)a0 toIndex:(long long)a1;
- (id)parentObject;
- (long long)countOfSongs;
- (void)setAudioPlaylist:(id)a0;
- (void)setPlug:(id)a0;
- (id)objectInSongsAtIndex:(long long)a0;
- (void)insertObject:(id)a0 inSongsAtIndex:(long long)a1;
- (void)removeObjectFromSongsAtIndex:(long long)a0;
- (void)replaceObjectInSongsAtIndex:(long long)a0 withObject:(id)a1;

@end
