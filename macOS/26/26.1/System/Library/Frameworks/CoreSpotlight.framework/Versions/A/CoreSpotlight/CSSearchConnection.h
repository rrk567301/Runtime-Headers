@class NSMutableDictionary;

@interface CSSearchConnection : CSXPCConnection

@property (retain, nonatomic) NSMutableDictionary *queries;

+ (id)sharedCSUserFSConnection;
+ (id)sharedSearchConnection;

- (void)preheat:(id)a0;
- (void)waitForGameModeEnd:(id /* block */)a0 queryID:(long long)a1;
- (id)removeQueryForID:(id)a0;
- (void)handleError:(id)a0;
- (void)cancelQuery:(unsigned long long)a0;
- (id)createXPCDictionaryForQuery:(id)a0 queryID:(long long)a1 queryContext:(id)a2 needsInitialization:(BOOL)a3;
- (id)initWithMachServiceName:(id)a0;
- (void).cxx_destruct;
- (void)handleReply:(id)a0;
- (void)setQuery:(id)a0 forID:(id)a1;
- (id)queryForID:(id)a0;
- (void)sendMessageAsync:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)startQuery:(id)a0 context:(id)a1;

@end
