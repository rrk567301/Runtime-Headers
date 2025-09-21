@class _PASSqliteStatement;

@interface GDLazyGraphTripleRowCursor : NSObject {
    char _colMap[9];
    _PASSqliteStatement *_statement;
    char _done;
}

- (void).cxx_destruct;

@end
