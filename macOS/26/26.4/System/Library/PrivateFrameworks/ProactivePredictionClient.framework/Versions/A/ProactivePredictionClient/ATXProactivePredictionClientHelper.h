@class NSXPCConnection;

@interface ATXProactivePredictionClientHelper : NSObject <ATXProactivePredictionClientXPCInterface>

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

- (id)_getConnection;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)parameterSuggestionsForBundleID:(id)a0 intentName:(id)a1 toolID:(id)a2 limit:(unsigned long long)a3 withCompletion:(id /* block */)a4;
- (void)suggestionMetadataForActions:(id)a0 withCompletion:(id /* block */)a1;
- (id)suggestionMetadataForActions:(id)a0 error:(id *)a1;

@end
