@interface ILiMovieMediaManager : ILMediaManager

+ (id)sharedMediaManager;

- (id)_init;
- (id)init;
- (id)dictionaryWithProjects:(id)a0;
- (id)iMovieApplicationVersion;
- (id)iMovieFolders;
- (id)projectGroupsForPaths:(id)a0;

@end
