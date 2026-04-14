@class NSObject, AFInstanceContext, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AFMultiUserConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_targetQueue;
    AFInstanceContext *_instanceContext;
}

- (id)init;
- (void).cxx_destruct;
- (id)_connection;
- (void)getHomeUserIdForSharedUserId:(id)a0 completion:(id /* block */)a1;
- (id)initWithConnectionFactory:(id)a0;
- (void)_clearConnection;
- (void)getSharedUserIdForHomeUserId:(id)a0 completion:(id /* block */)a1;
- (void)getConformingSharedUserIdForHomeUserId:(id)a0 completion:(id /* block */)a1;
- (void)getFirstNameForSharedUserId:(id)a0 completion:(id /* block */)a1;
- (void)getConformingSharedUserIds:(id /* block */)a0;
- (void)getMultiUserSettingsForSharedUserID:(id)a0 completion:(id /* block */)a1;
- (void)getHomeUserIdOfRecognizedUserWithCompletion:(id /* block */)a0;
- (void)getPreferredMediaUserHomeUserIDWithCompletion:(id /* block */)a0;
- (id)_multiUserServiceWithErrorHandler:(id /* block */)a0;
- (void)getSharedUserProfileLimitWithCompletion:(id /* block */)a0;

@end
