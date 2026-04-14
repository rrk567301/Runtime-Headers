@interface PGFlexMusicKitSongProvider : NSObject <PGFlexMusicSongProviderProtocol>

- (id)init;
- (id)name;
- (id)allFlexSongsAndReturnError:(id *)a0;
- (id)usableFlexSongsAndReturnError:(id *)a0;

@end
