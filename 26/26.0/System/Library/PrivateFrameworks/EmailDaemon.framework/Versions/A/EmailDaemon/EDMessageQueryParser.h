@class EFSQLObjectPropertyMapper, EDMessageQueryTransformer;
@protocol EFSQLValueExpressable;

@interface EDMessageQueryParser : NSObject

@property (readonly, nonatomic) EDMessageQueryTransformer *transformer;
@property (readonly, nonatomic) id<EFSQLValueExpressable> additionalSQLClause;
@property (readonly, nonatomic) id<EFSQLValueExpressable> additionalSQLClauseForCountQuery;
@property (readonly, nonatomic) id<EFSQLValueExpressable> additionalSQLClauseForGlobalMessageCountQuery;
@property (readonly, nonatomic) id<EFSQLValueExpressable> additionalSQLClauseForJournaledMessages;
@property (readonly, nonatomic) EFSQLObjectPropertyMapper *sqlPropertyMapper;

+ (id)log;

- (void).cxx_destruct;
- (id)sqlCountQueryByMailboxForQuery:(id)a0;
- (void)_modifySelectStatement:(id)a0 byAddingAdditionalClause:(id)a1;
- (id)_sqlQueryToCountResultsForQuery:(id)a0 distinctByGlobalMessageID:(BOOL)a1;
- (id)initWithSchema:(id)a0 protectedSchema:(id)a1 messagePersistence:(id)a2 queryTransformer:(id)a3;
- (id)sqlCountQueryForQuery:(id)a0;
- (id)sqlQueryForQuery:(id)a0 protectedDataAvailable:(BOOL)a1;
- (id)sqlQueryToCountJournaledMessagesForQuery:(id)a0;
- (id)sqlQueryToCountMessagesWithGlobalMessageID:(long long)a0 matchingQuery:(id)a1;

@end
