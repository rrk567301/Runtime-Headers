@interface SMSystemRuleClient : NSObject

+ (id)sharedClient;

- (void)dealloc;
- (id)executeQuery:(id)a0;
- (void)openDatabase;
- (id)dictionaryFromStatement:(struct sqlite3_stmt { } *)a0;
- (id)getAllRules;
- (id)getArgumentsByRuleIDSortByArgumentOrder:(long long)a0;
- (id)getChecksumsByFilePath:(id)a0;
- (id)getRuleByID:(long long)a0;
- (id)getRulesByRuleGroup:(long long)a0;
- (id)valueForColumnAtIndex:(int)a0 statement:(struct sqlite3_stmt { } *)a1 type:(id)a2;

@end
