@class NSXPCConnection;

@interface LNSuggestionsProvider : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (id)suggestedActionsForSuggestionsRequests:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
