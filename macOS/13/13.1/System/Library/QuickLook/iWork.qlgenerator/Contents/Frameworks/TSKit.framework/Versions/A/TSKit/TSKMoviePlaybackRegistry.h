@interface TSKMoviePlaybackRegistry : NSObject

+ (id)sharedMoviePlaybackRegistry;

- (id)init;
- (void)objectWillBeginMoviePlayback:(id)a0;
- (void)objectDidEndMoviePlayback:(id)a0;

@end
