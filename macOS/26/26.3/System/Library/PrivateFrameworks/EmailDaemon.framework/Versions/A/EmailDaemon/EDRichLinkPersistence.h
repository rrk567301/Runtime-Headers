@class NSString, EDPersistenceDatabase;

@interface EDRichLinkPersistence : NSObject <EDPersistenceDatabaseSchemaProvider>

@property (class, readonly, copy, nonatomic) NSString *richLinksTableName;

@property (retain, nonatomic) EDPersistenceDatabase *database;

+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)messageRichLinksTableName;
+ (id)messagesRichLinksTableSchema;
+ (id)richLinksTableSchema;

- (id)initWithDatabase:(id)a0;
- (void).cxx_destruct;
- (id)datasForPersistentIDs:(id)a0 basePath:(id)a1;
- (id)_hashForRichLinkData:(id)a0;
- (void)cleanUpLegacyRichLinkFilesAtBasePath:(id)a0;
- (id)richLinkDataForPersistentID:(id)a0 basePath:(id)a1;
- (id)richLinkPersistentIDsForGlobalMessageID:(long long)a0;
- (id)richLinkURLsForMessageIDs:(id)a0;
- (id)saveRichLinkData:(id)a0 globalMessageID:(long long)a1 basePath:(id)a2;

@end
