@interface PGMeCameraStyleableSuggester : PGMeWallpaperSuggester

+ (id)suggestionTypes;
+ (char)filtersForTopSuggestions;
+ (id)suggestionSubtypes;

- (void)setupFilteringContexts;

@end
