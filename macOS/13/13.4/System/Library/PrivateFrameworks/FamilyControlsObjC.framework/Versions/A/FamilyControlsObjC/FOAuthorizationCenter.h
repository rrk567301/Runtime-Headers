@class NSArray, NSXPCConnection;

@interface FOAuthorizationCenter : NSObject

@property (class, readonly) FOAuthorizationCenter *sharedCenter;

@property (readonly) NSXPCConnection *xpcConnection;
@property (readonly) NSArray *authorizationRecords;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (void)requestAuthorizationForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestInternalAuthorizationWithCompletionHandler:(id /* block */)a0;
- (void)resetAuthorizationForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)revokeAuthorizationForDeletionForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)revokeAuthorizationForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)revokeInternalAuthorizationWithCompletionHandler:(id /* block */)a0;

@end
