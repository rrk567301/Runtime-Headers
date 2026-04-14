@class NSXPCConnection;

@interface STSettingsServiceClient : NSObject

@property (retain) NSXPCConnection *connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)processSettingsChangesSinceHistoryToken:(id)a0 error:(id *)a1;

@end
