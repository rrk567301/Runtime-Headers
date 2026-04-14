@class NSXPCConnection;

@interface LNSuggestionsProvider : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)suggestedActionsForSuggestionsRequests:(id)a0 error:(id *)a1;
- (id)init;
- (void)dealloc;

@end
