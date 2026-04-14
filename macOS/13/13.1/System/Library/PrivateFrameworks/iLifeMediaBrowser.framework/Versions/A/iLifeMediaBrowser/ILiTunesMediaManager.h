@interface ILiTunesMediaManager : ILMediaManager

+ (id)sharedMediaManager;

- (id)init;
- (id)_init;
- (id)modificationDate;
- (id)dBasePath;
- (id)iTunesApplicationVersion;
- (id)albumArtworkForTrack:(id)a0;
- (id)dictionaryWithPlaylists:(id)a0;
- (id)dictionaryWithSongs:(id)a0;
- (id)playlistsInDictionary:(id)a0;

@end
