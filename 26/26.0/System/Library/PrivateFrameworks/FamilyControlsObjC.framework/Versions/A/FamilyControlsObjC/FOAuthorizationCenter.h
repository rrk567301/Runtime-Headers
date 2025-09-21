@class NSArray, NSXPCConnection, NSObject;

@interface FOAuthorizationCenter : NSObject

@property (class, readonly) FOAuthorizationCenter *sharedCenter;

@property (retain, nonatomic) NSXPCConnection *currentConnection;
@property (readonly, nonatomic) NSObject *connectionLock;
@property (readonly) NSArray *authorizationRecords;

- (void)dealloc;
- (id)xpcConnection;
- (id)init;
- (void).cxx_destruct;
- (id)authorizationsPlist;
- (void)clearCurrentConnectionAndInvalidate:(BOOL)a0;
- (void)requestAuthorizationForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestInternalAuthorizationForMember:(long long)a0 completionHandler:(id /* block */)a1;
- (void)resetAuthorizationForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)revokeAuthorizationForDeletionForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)revokeAuthorizationForRecordIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)revokeInternalAuthorizationWithCompletionHandler:(id /* block */)a0;

@end
