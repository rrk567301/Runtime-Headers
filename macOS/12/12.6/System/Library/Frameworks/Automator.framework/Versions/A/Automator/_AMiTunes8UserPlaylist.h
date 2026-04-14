@interface _AMiTunes8UserPlaylist : _AMiTunes8Playlist

@property BOOL shared;
@property (readonly) BOOL smart;

- (id)fileTracks;
- (id)URLTracks;
- (id)sharedTracks;

@end
