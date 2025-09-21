@class NSArray, NSString;
@protocol EFSQLValueExpressable;

@interface EFSQLIndexSchema : NSObject

@property (readonly, copy, nonatomic) NSArray *indexedColumns;
@property (readonly, nonatomic) id<EFSQLValueExpressable> where;
@property (readonly, nonatomic) char unique;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *tableName;

- (void).cxx_destruct;
- (id)definitionWithDatabaseName:(id)a0;
- (id)initWithName:(id)a0 tableName:(id)a1 indexedColumns:(id)a2 where:(id)a3 unique:(char)a4;
- (id)initWithTableName:(id)a0 columnNames:(id)a1;
- (id)initWithTableName:(id)a0 columnNames:(id)a1 where:(id)a2 unique:(char)a3;
- (id)initWithTableName:(id)a0 indexedColumns:(id)a1;
- (id)initWithTableName:(id)a0 indexedColumns:(id)a1 where:(id)a2 unique:(char)a3;

@end
