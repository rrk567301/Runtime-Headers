@class NSError, NSString, NSArray, SKStatusPublishRequest, SKHandleInvitability, SKHandle, SKAStatusPublishingServiceClient, SKInvitationPayload;

@interface SKAStatusPublishingServiceClientProxy : NSObject <SKStatusPublishingDaemonProtocol> {
    void /* unknown type, empty encoding */ queue;
}

@property (nonatomic, retain) SKAStatusPublishingServiceClient *underlyingClient;

- (id)init;
- (void)fetchHandleInvitability:(SKHandle *)a0 fromHandle:(SKHandle *)a1 forStatusTypeIdentifier:(NSString *)a2 completion:(void (^)(SKHandleInvitability *, NSError *))a3;
- (void)provisionPayloads:(NSArray *)a0 statusTypeIdentifier:(NSString *)a1 completion:(void (^)(NSArray *, NSError *))a2;
- (void).cxx_destruct;
- (void)inviteHandles:(NSArray *)a0 fromSenderHandle:(SKHandle *)a1 withInvitationPayload:(SKInvitationPayload *)a2 statusTypeIdentifier:(NSString *)a3 completion:(void (^)(NSError *))a4;
- (void)invitedHandlesForStatusTypeIdentifier:(NSString *)a0 completion:(void (^)(NSArray *, NSError *))a1;
- (void)isHandleInviteable:(SKHandle *)a0 fromHandle:(SKHandle *)a1 forStatusTypeIdentifier:(NSString *)a2 completion:(void (^)(BOOL, NSError *))a3;
- (void)isHandleInvited:(SKHandle *)a0 fromSenderHandle:(SKHandle *)a1 forStatusTypeIdentifier:(NSString *)a2 completion:(void (^)(BOOL, NSError *))a3;
- (void)publishStatusRequest:(SKStatusPublishRequest *)a0 statusTypeIdentifier:(NSString *)a1 completion:(void (^)(NSString *, NSError *))a2;
- (void)registerForDelegateCallbacksWithStatusTypeIdentifier:(NSString *)a0 completion:(void (^)(NSError *))a1;
- (void)removeAllInvitedHandlesFromPersonalChannelWithStatusTypeIdentifier:(NSString *)a0 completion:(void (^)(NSError *))a1;
- (void)removeInvitedHandles:(NSArray *)a0 statusTypeIdentifier:(NSString *)a1 completion:(void (^)(NSError *))a2;
- (id)initWithXPCConnection:(id)a0 queue:(id)a1 delegate:(id)a2 databaseManager:(id)a3 invitationManager:(id)a4 publishingManager:(id)a5 channelManager:(id)a6;

@end
