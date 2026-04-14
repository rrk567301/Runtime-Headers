@interface _HDSQLiteStatementCacheStorage : NSObject {
    _HDSQLiteStatementCacheStorage *_parentStorage;
    struct __CFDictionary { } *_statementsBySQL;
    struct __CFDictionary { } *_statementsByKey;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
