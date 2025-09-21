@interface _AMiTunes8UserPlaylist : _AMiTunes8Playlist

@property char shared;
@property (readonly) char smart;

- (id)URLTracks;
- (id)fileTracks;
- (id)sharedTracks;

@end
