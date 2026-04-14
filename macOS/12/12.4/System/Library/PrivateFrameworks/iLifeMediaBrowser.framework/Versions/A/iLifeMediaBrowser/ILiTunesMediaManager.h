@interface ILiTunesMediaManager : ILMediaManager

+ (id)sharedMediaManager;

- (id)init;
- (id)_init;
- (id)modificationDate;
- (id)albumArtworkForTrack:(id)a0;
- (id)dictionaryWithPlaylists:(id)a0;
- (id)dBasePath;
- (id)iTunesApplicationVersion;
- (id)dictionaryWithSongs:(id)a0;
- (id)playlistsInDictionary:(id)a0;

@end
