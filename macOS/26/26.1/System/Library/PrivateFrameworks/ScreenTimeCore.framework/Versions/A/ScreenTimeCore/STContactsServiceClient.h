@class NSXPCConnection;

@interface STContactsServiceClient : NSObject

@property (retain) NSXPCConnection *connection;

- (void)restrictionsPasscodeEntryAttemptCountAndTimeoutDateWithCompletionHandler:(id /* block */)a0;
- (void)authenticateRestrictionsPasscode:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)isRestrictionsPasscodeSetWithCompletionHandler:(id /* block */)a0;
- (void)presentRemotePINControllerWithCompletionHandler:(id /* block */)a0;

@end
