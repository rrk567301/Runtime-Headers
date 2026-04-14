@class NSUndoManager, BookmarksController, NSMutableArray;
@protocol BookmarksUndoControllerDataStore;

@interface BookmarksUndoController : NSObject {
    id<BookmarksUndoControllerDataStore> _dataStore;
    BookmarksController *_bookmarksController;
    NSUndoManager *_strongUndoManager;
    unsigned long long _undoCompatibleChangeCount;
    NSMutableArray *_transactionActionNameStack;
}

@property (weak, nonatomic) NSUndoManager *undoManager;

+ (id)frontmostUndoController;
+ (BOOL)canPerformUserInitiatedBookmarkOperations;

- (void)dealloc;
- (void).cxx_destruct;
- (void)endTransaction;
- (BOOL)removeBookmarks:(id)a0;
- (id)copyBookmarksFromPasteboard:(id)a0 toFolder:(id)a1 startingIndex:(unsigned long long)a2;
- (id)moveBookmarksFromPasteboard:(id)a0 toFolder:(id)a1 startingIndex:(unsigned long long)a2;
- (BOOL)moveBookmarks:(id)a0 to:(id)a1 startingIndex:(unsigned long long)a2;
- (void)_bookmarksChanged:(id)a0;
- (BOOL)insertBookmark:(id)a0 atIndex:(unsigned long long)a1 inBookmarkFolder:(id)a2 allowDuplicateURLs:(BOOL)a3;
- (BOOL)changeTitleOfBookmark:(id)a0 to:(id)a1;
- (void)cleanUpBookmarksByNameForFolder:(id)a0 completionHandler:(id /* block */)a1;
- (void)cleanUpBookmarksByAddressForFolder:(id)a0 completionHandler:(id /* block */)a1;
- (void)_stopObservation;
- (void)_startObservation;
- (id)_popTransactionActionNameStack;
- (void)willPerformUndoCompatibleBookmarksChange;
- (void)didPerformUndoCompatibleBookmarksChange;
- (void)beginTransactionWithActionName:(id)a0 logActionName:(id)a1;
- (void)performUndoCompatibleBookmarksChangeInBlock:(id /* block */)a0;
- (void)_undoNewBookmarkWithUndoInfo:(id)a0 preflightBlock:(id /* block */)a1 completionBlock:(id /* block */)a2 redoPreflightBlock:(id /* block */)a3 redoCompletionBlock:(id /* block */)a4;
- (void)_redoNewBookmarkWithUndoInfo:(id)a0 preflightBlock:(id /* block */)a1 completionBlock:(id /* block */)a2 undoPreflightBlock:(id /* block */)a3 undoCompletionBlock:(id /* block */)a4;
- (id)_undoMoveBookmarksWithUndoInfo:(id)a0 preflightBlock:(id /* block */)a1 completionBlock:(id /* block */)a2 redoPreflightBlock:(id /* block */)a3 redoCompletionBlock:(id /* block */)a4;
- (id)_redoMoveBookmarksWithUndoInfo:(id)a0 preflightBlock:(id /* block */)a1 completionBlock:(id /* block */)a2 undoPreflightBlock:(id /* block */)a3 undoCompletionBlock:(id /* block */)a4;
- (id)_insertBookmarksFromPasteboard:(id)a0 inFolder:(id)a1 startingIndex:(unsigned long long)a2 undoTarget:(id)a3 selector:(SEL)a4 isCopy:(BOOL)a5;
- (id)_addNewFolderTo:(id)a0 withTitle:(id)a1 insertionIndex:(unsigned long long)a2 undoTarget:(id)a3 selector:(SEL)a4;
- (id)_cleanUpBookmarksByNameForBookmarks:(id)a0;
- (id)_cleanUpBookmarksByAddressForBookmarks:(id)a0;
- (void)_reorderBookmarksAsMovesWithSortedBookmarks:(id)a0;
- (void)_undoChangeTitle:(id)a0;
- (void)_undoChangePreviewText:(id)a0;
- (void)_undoChangeAddress:(id)a0;
- (void)_undoRemoveBookmarks:(id)a0;
- (BOOL)_moveBookmarks:(id)a0 to:(id)a1 startingIndex:(unsigned long long)a2 isCopy:(BOOL)a3 undoTarget:(id)a4 selector:(SEL)a5 addedBookmarks:(id *)a6;
- (void)_undoNewBookmark:(id)a0;
- (id)addNewFolderTo:(id)a0 withTitle:(id)a1 insertionIndex:(unsigned long long)a2;
- (BOOL)insertBookmarks:(id)a0 startingAtIndex:(unsigned long long)a1 inBookmarkFolder:(id)a2;
- (BOOL)changePreviewTextOfBookmark:(id)a0 to:(id)a1 isUserCustomized:(BOOL)a2;
- (void)performUndoCompatibleBookmarksChangeWithActionName:(id)a0 logActionName:(id)a1 inBlock:(id /* block */)a2;
- (BOOL)toggleFolderAutomaticallyReplacesTabs:(id)a0;
- (id)_bookmarkForContentChangeUndoInfo:(id)a0;
- (void)_redoRemoveBookmarks:(id)a0;
- (id)replaceBookmarksWithUndoInfo:(id)a0 target:(id)a1 selector:(SEL)a2 reverseOrder:(BOOL)a3;
- (void)removeBookmarksWithUndoInfo:(id)a0 target:(id)a1 selector:(SEL)a2;
- (void)redoNewBookmarkWithUndoInfo:(id)a0 preflightBlock:(id /* block */)a1 completionBlock:(id /* block */)a2 undoPreflightBlock:(id /* block */)a3 undoCompletionBlock:(id /* block */)a4;
- (void)undoNewBookmarkWithUndoInfo:(id)a0 preflightBlock:(id /* block */)a1 completionBlock:(id /* block */)a2 redoPreflightBlock:(id /* block */)a3 redoCompletionBlock:(id /* block */)a4;
- (void)redoMoveBookmarksWithUndoInfo:(id)a0 preflightBlock:(id /* block */)a1 completionBlock:(id /* block */)a2 undoPreflightBlock:(id /* block */)a3 undoCompletionBlock:(id /* block */)a4;
- (void)undoMoveBookmarksWithUndoInfo:(id)a0 preflightBlock:(id /* block */)a1 completionBlock:(id /* block */)a2 redoPreflightBlock:(id /* block */)a3 redoCompletionBlock:(id /* block */)a4;
- (id)_undoMoveBookmarks:(id)a0;
- (void)finishMovingBookmarks:(id)a0 originalBookmarks:(id)a1 undoTarget:(id)a2 selector:(SEL)a3;
- (id)initWithUndoManager:(id)a0 dataStore:(id)a1 bookmarksController:(id)a2;
- (void)setCurrentTransactionActionName:(id)a0;
- (id)moveBookmarksFromPasteboard:(id)a0 toFolder:(id)a1 startingIndex:(unsigned long long)a2 undoTarget:(id)a3 selector:(SEL)a4;
- (id)copyBookmarksFromPasteboard:(id)a0 toFolder:(id)a1 startingIndex:(unsigned long long)a2 undoTarget:(id)a3 selector:(SEL)a4;
- (id)addNewContentsFolderTo:(id)a0 withTitle:(id)a1 insertionIndex:(unsigned long long)a2 undoTarget:(id)a3 selector:(SEL)a4;
- (BOOL)changeAddressOfBookmark:(id)a0 to:(id)a1;
- (id)moveBookmarks:(id)a0 toNewFolderWithTitle:(id)a1 replacingBookmark:(id)a2;

@end
