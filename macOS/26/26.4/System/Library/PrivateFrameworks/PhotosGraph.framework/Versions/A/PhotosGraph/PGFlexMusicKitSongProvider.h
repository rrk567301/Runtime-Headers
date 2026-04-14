@interface PGFlexMusicKitSongProvider : NSObject <PGFlexMusicSongProviderProtocol>

- (id)name;
- (id)init;
- (id)allFlexSongsAndReturnError:(id *)a0;
- (id)usableFlexSongsAndReturnError:(id *)a0;

@end
