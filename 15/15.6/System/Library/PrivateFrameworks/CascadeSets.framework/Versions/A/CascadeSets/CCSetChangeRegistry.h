@class NSMutableDictionary, BMFileBackedDictionary;

@interface CCSetChangeRegistry : NSObject {
    BMFileBackedDictionary *_log;
    NSMutableDictionary *_pendingUpdates;
    char _pendingClear;
}

+ (id)_keyForSet:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)bookmarkForSet:(id)a0;
- (char)clearAllBookmarksAndCommit:(id *)a0;
- (char)commitAllBookmarkUpdates:(id *)a0;
- (id)initWithFilename:(id)a0 directory:(id)a1 protectionClass:(int)a2 error:(id *)a3;
- (char)updateBookmark:(id)a0 forSet:(id)a1 error:(id *)a2;
- (char)_clear:(id *)a0;
- (id)_archiveBookmark:(id)a0 error:(id *)a1;
- (id)_unarchiveBookmark:(id)a0 error:(id *)a1;
- (char)cleanupWithAllSets:(id)a0 error:(id *)a1;
- (void)clearAllBookmarks;
- (id)descriptionForBookmark:(id)a0;
- (char)enumerateAllBookmarks:(id *)a0 usingBlock:(id /* block */)a1;
- (void)rollbackAllBookmarkUpdates;

@end
