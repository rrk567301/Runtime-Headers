@class NSString;

@interface CNMockFavoritesLogger : NSObject <CNFavoritesLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)failedToReadFavoritesFromPath:(id)a0 error:(id)a1 simulateCrashReport:(BOOL)a2;
- (void)writingFavorites:(id /* block */)a0;
- (void)rematchingFavorites:(id /* block */)a0;
- (void)finishedWritingRemoteFavorites;
- (void)readingFavorites:(id /* block */)a0;
- (void)finishedReadingRemoteFavorites;
- (void)finishedWritingFavoritesToPath:(id)a0 entriesCount:(unsigned long long)a1;
- (void)failedToConvertFavoritesToPropertyList:(id)a0;
- (void)failedToReadRemoteFavorites:(id)a0 willRetry:(BOOL)a1;
- (void)failedToWriteFavoritesForMatching:(id)a0;
- (void)failedToVerifyFavorites:(id)a0 withPropertyListFavorites:(id)a1 error:(id)a2;
- (void)reportFavoritesAccessedBeforeFirstUnlock;
- (void)finishedReadingFavoritesFromPath:(id)a0 entriesCount:(unsigned long long)a1;
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(id)a0;
- (void)failedToWriteRemoteFavorites:(id)a0 willRetry:(BOOL)a1;
- (void)finishedWritingFavoritesForMatching;
- (void)finishedReadingFavoritesForMatching;
- (void)reportFavoritesAccessedAfterFirstUnlock;
- (void)failedToWriteFavoritesToPath:(id)a0 error:(id)a1 simulateCrashReport:(BOOL)a2;
- (void)failedToReadFavoritesForMatching:(id)a0;

@end
