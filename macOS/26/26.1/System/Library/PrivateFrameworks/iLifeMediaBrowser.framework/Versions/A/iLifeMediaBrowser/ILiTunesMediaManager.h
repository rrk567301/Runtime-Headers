@interface ILiTunesMediaManager : ILMediaManager

+ (id)sharedMediaManager;

- (id)modificationDate;
- (id)_init;
- (id)init;
- (id)albumArtworkForTrack:(id)a0;
- (id)dBasePath;
- (id)dictionaryWithPlaylists:(id)a0;
- (id)dictionaryWithSongs:(id)a0;
- (id)iTunesApplicationVersion;
- (id)playlistsInDictionary:(id)a0;

@end
