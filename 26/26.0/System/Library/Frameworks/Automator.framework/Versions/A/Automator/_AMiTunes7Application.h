@class _AMiTunes7Visual, NSString, _AMiTunes7Encoder, _AMiTunes7EQPreset, _AMiTunes7Playlist, _AMiTunes7Track, SBObject;

@interface _AMiTunes7Application : SBApplication

@property (copy) _AMiTunes7Encoder *currentEncoder;
@property (copy) _AMiTunes7EQPreset *currentEQPreset;
@property (readonly, copy) _AMiTunes7Playlist *currentPlaylist;
@property (readonly, copy) NSString *currentStreamTitle;
@property (readonly, copy) NSString *currentStreamURL;
@property (readonly, copy) _AMiTunes7Track *currentTrack;
@property (copy) _AMiTunes7Visual *currentVisual;
@property BOOL EQEnabled;
@property BOOL fixedIndexing;
@property BOOL frontmost;
@property BOOL fullScreen;
@property (readonly, copy) NSString *name;
@property BOOL mute;
@property long long playerPosition;
@property (readonly) int playerState;
@property (readonly, copy) SBObject *selection;
@property long long soundVolume;
@property (readonly, copy) NSString *version;
@property BOOL visualsEnabled;
@property int visualSize;

+ (id)application;

- (void)pause;
- (void)openLocation:(id)a0;
- (id)codesForPropertyNames;
- (id)sources;
- (void)subscribe:(id)a0;
- (void)stop;
- (void)run;
- (void)quit;
- (void)resume;
- (id)add:(id)a0 to:(id)a1;
- (void)update;
- (id)classNamesForCodes;
- (id)windows;
- (void)eject;
- (void)rewind;
- (id)EQWindows;
- (id)EQPresets;
- (id)playlistWindows;
- (id)visuals;
- (void)backTrack;
- (id)browserWindows;
- (id)convert:(id)a0;
- (id)encoders;
- (void)fastForward;
- (void)nextTrack;
- (void)playOnce:(BOOL)a0;
- (void)playpause;
- (void)previousTrack;
- (void)printPrintDialog:(BOOL)a0 withProperties:(id)a1 kind:(int)a2 theme:(id)a3;
- (void)updateAllPodcasts;
- (void)updatePodcast;

@end
