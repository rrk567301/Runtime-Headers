@interface SiriCoreSQLiteStatement : NSObject {
    struct sqlite3_stmt { } *_impl;
    char _finalizeWhenDone;
}

- (void)dealloc;
- (void)reset;
- (struct sqlite3_stmt { } *)impl;
- (void)clearBindings;
- (id)initWithImpl:(struct sqlite3_stmt { } *)a0 finalizeWhenDone:(char)a1;

@end
