@class NSString, _PASSqliteDatabase;

@interface GDSQLGraphObjectRetriever : NSObject <GDObjectRetriever> {
    _PASSqliteDatabase *_db;
    NSString *_tableName;
    NSString *_entityClassIdentifierName;
    long long _entityClassIdentifier;
    Class _triplesIteratorRenderer;
}

- (id)objectForIdentifier:(id)a0;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enumerateIdentifiersWithBlock:(id /* block */)a0;
- (void)enumerateIdentifiersWithQuery:(id)a0 block:(id /* block */)a1;
- (void)enumerateObjectsWithQuery:(id)a0 block:(id /* block */)a1;

@end
