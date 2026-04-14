@class NSArray, NSDictionary;

@interface EFSQLSchema : NSObject {
    NSDictionary *_tablesByName;
}

@property (readonly, copy, nonatomic) NSArray *tables;

- (id)tableForName:(id)a0;
- (id)initWithTables:(id)a0;
- (id)definitionWithDatabaseName:(id)a0 includeIndexes:(BOOL)a1;
- (void).cxx_destruct;
- (id)indexDefinitionsWithDatabaseName:(id)a0;
- (id)definitionWithDatabaseName:(id)a0;
- (id)description;

@end
