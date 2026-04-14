@class NetscapeBookmarkFileReaderBookmarkList, Test_NetscapeBookmarkFileReaderBookmarkList, NSMutableArray;

@interface NetscapeBookmarkFileReaderDelegateProxy : NSObject <WBSNetscapeBookmarkFileReaderDelegate> {
    NSMutableArray *_stack;
    NetscapeBookmarkFileReaderBookmarkList *_favoritesFolderList;
    BOOL _parsingReadingList;
    BOOL _underTest;
}

@property (readonly, nonatomic) unsigned long long successfullyImportedBookmarksCount;
@property (readonly, nonatomic) BOOL test_parsingReadingList;
@property (readonly, nonatomic) Test_NetscapeBookmarkFileReaderBookmarkList *test_readingList;
@property (readonly, nonatomic) Test_NetscapeBookmarkFileReaderBookmarkList *test_rootFolder;

- (void).cxx_destruct;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)endAddingFolder;
- (void)appendBookmarkWithTitle:(id)a0 urlString:(id)a1 dateOfLastVisitIfReadingListItem:(id)a2;
- (void)beginAddingFolder:(id)a0 identifier:(id)a1;
- (id)_bookmarkFoldersStack;
- (id)initWithFavoritesFolder:(id)a0;
- (id)initWithFavoritesFolder:(id)a0 test_netscapeBookmarkFileReaderFavorites:(id)a1;

@end
