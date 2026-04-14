@class NSString, NSArray, CCDatabaseInsert;

@interface CCDatabaseItemFieldIndexer : NSObject {
    NSArray *_configuration;
    CCDatabaseInsert *_cachedInsertCommand;
}

@property (readonly, nonatomic) NSString *blobTableName;
@property (readonly, nonatomic) NSString *blobPrimaryKeyColumnName;
@property (readonly, nonatomic) NSString *itemFieldTableName;
@property (readonly, nonatomic) unsigned long long indexedItemFieldCount;
@property (readonly, nonatomic) Class itemMessageSubclass;

+ (BOOL)descriptorAllowList:(id)a0 allowsSet:(id)a1;
+ (id)indexerFromConfiguration:(id)a0 forBlobTable:(id)a1 set:(id)a2;
+ (BOOL)isFieldType:(unsigned short)a0 applicableToBlobTable:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (void)appendDatabaseValues:(id)a0 fromItemField:(id)a1;
- (id)configuredColumnNames;
- (BOOL)enumerateInsertCommandsForItemMessage:(id)a0 withBlobPrimaryKey:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (unsigned short)expirationDateFieldType;
- (id)genSQLCreateStatements;
- (id)initWithIndexedFieldConfiguration:(id)a0 blobTableName:(id)a1 itemType:(unsigned short)a2;
- (BOOL)isValidPredicate:(id)a0 error:(id *)a1;
- (id)stringForItemFieldDataType:(unsigned char)a0;

@end
