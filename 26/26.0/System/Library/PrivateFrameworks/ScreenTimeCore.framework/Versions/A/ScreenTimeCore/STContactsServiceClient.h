@class NSXPCConnection;

@interface STContactsServiceClient : NSObject

@property (retain) NSXPCConnection *connection;

- (void)dealloc;
- (void)restrictionsPasscodeEntryAttemptCountAndTimeoutDateWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)authenticateRestrictionsPasscode:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)isRestrictionsPasscodeSetWithCompletionHandler:(id /* block */)a0;
- (void)presentRemotePINControllerWithCompletionHandler:(id /* block */)a0;

@end
