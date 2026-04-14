@class NSXPCConnection;

@interface SUSetupAssistantActions : NSObject {
    NSXPCConnection *_connection;
}

+ (double)estimatedRunningTime;

- (id)init;
- (void)dealloc;
- (BOOL)_connectToService;
- (void)_disconnectFromService;
- (void)runActionsWithProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
