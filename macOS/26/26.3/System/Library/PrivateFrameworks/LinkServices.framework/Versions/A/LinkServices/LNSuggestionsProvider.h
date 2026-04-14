@class NSXPCConnection;

@interface LNSuggestionsProvider : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)suggestedActionsForSuggestionsRequests:(id)a0 error:(id *)a1;

@end
