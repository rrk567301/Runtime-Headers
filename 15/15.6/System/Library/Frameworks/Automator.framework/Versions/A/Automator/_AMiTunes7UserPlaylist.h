@interface _AMiTunes7UserPlaylist : _AMiTunes7Playlist

@property char shared;
@property (readonly) char smart;

- (id)URLTracks;
- (id)fileTracks;
- (id)sharedTracks;

@end
