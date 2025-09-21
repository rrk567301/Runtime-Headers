@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNFavoritesLogger : NSObject <CNFavoritesLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) NSObject<OS_os_log> *summaryLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)failedToWriteRemoteFavorites:(id)a0;
- (void)failedToWriteFavoritesForMatching:(id)a0;
- (void)finishedReadingRemoteFavorites;
- (void)failedToReadRemoteFavorites:(id)a0;
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(id)a0;
- (void)finishedWritingFavoritesToPath:(id)a0 entriesCount:(unsigned long long)a1;
- (void)readingFavorites:(id /* block */)a0;
- (void)reportFavoritesAccessedBeforeFirstUnlock;
- (void)_simulateCrashReportWithMessage:(id)a0;
- (void)writingFavorites:(id /* block */)a0;
- (void)failedToReadFavoritesForMatching:(id)a0;
- (id)init;
- (void)finishedWritingFavoritesForMatching;
- (void)failedToReadFavoritesFromPath:(id)a0 error:(id)a1 simulateCrashReport:(BOOL)a2;
- (void)failedToConvertFavoritesToPropertyList:(id)a0;
- (void)reportFavoritesAccessedAfterFirstUnlock;
- (void)finishedReadingFavoritesForMatching;
- (void)failedToWriteFavoritesToPath:(id)a0 error:(id)a1 simulateCrashReport:(BOOL)a2;
- (void)rematchingFavorites:(id /* block */)a0;
- (void)finishedReadingFavoritesFromPath:(id)a0 entriesCount:(unsigned long long)a1;
- (void)failedToVerifyFavorites:(id)a0 withPropertyListFavorites:(id)a1 error:(id)a2;
- (void)finishedWritingRemoteFavorites;
- (void).cxx_destruct;

@end
