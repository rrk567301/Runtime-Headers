@class PQLConnection;

@interface SMRulesEngineDBClient : NSObject

@property (retain, nonatomic) PQLConnection *connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)getAllPluginPaths;
- (id)getArgumentsByRuleIDSortByArgumentOrder:(long long)a0;
- (id)getChecksumsByFilePath:(id)a0;
- (id)getPatherRulesByType:(long long)a0;
- (id)getRulesByActionType:(long long)a0;
- (id)getRulesByContextGroupReboot:(long long)a0 ruleGroup:(long long)a1 afterReboot:(BOOL)a2;
- (id)getRulesByRuleGroup:(long long)a0;
- (id)resultSetToSMPatherRule:(id)a0;
- (id)resultSetToSMSystemRule:(id)a0;

@end
