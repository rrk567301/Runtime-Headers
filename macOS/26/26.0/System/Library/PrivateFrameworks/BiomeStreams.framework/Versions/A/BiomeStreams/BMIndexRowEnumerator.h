@class NSString, BMIndex, NSError;

@interface BMIndexRowEnumerator : NSObject <BMStoreBookmarkEnumerator> {
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_stmt;
    BMIndex *_index;
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)next;
- (void)dealloc;
- (id)error;
- (void).cxx_destruct;
- (id)allRows;
- (id)initWithDatabase:(struct sqlite3 { } *)a0 statement:(struct sqlite3_stmt { } *)a1 index:(id)a2;
- (id)nextBookmark;

@end
