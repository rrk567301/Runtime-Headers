@class NSXPCConnection;

@interface SUSetupAssistantActions : NSObject {
    NSXPCConnection *_connection;
}

+ (double)estimatedRunningTime;

- (BOOL)_connectToService;
- (id)init;
- (void)dealloc;
- (void)_disconnectFromService;
- (void)runActionsWithProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
