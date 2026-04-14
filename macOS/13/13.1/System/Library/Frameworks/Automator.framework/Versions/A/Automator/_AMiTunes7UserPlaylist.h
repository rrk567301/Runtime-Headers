@interface _AMiTunes7UserPlaylist : _AMiTunes7Playlist

@property BOOL shared;
@property (readonly) BOOL smart;

- (id)fileTracks;
- (id)URLTracks;
- (id)sharedTracks;

@end
