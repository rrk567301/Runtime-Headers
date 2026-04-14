@class NSMutableDictionary;

@interface CSSearchConnection : CSXPCConnection

@property (retain, nonatomic) NSMutableDictionary *queries;

+ (id)sharedCSUserFSConnection;
+ (id)testSearchConnection;
+ (id)sharedSearchConnection;

- (id)initWithMachServiceName:(id)a0;
- (void)preheat:(id)a0;
- (void)handleError:(id)a0;
- (id)createXPCDictionaryForQuery:(id)a0 queryID:(long long)a1 queryContext:(id)a2 needsInitialization:(BOOL)a3;
- (id)removeQueryForID:(id)a0;
- (void)startQuery:(id)a0 context:(id)a1;
- (void)setQuery:(id)a0 forID:(id)a1;
- (id)queryForID:(id)a0;
- (void)handleReply:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancelQuery:(unsigned long long)a0;
- (void)sendMessageAsync:(id)a0 completion:(id /* block */)a1;
- (void)waitForGameModeEnd:(id /* block */)a0 queryID:(long long)a1;

@end
