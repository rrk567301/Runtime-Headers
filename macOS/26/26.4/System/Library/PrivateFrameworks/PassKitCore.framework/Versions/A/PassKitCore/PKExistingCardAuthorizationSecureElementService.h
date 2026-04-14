@class NSObject;
@protocol OS_dispatch_queue;

@interface PKExistingCardAuthorizationSecureElementService : NSObject {
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

- (void).cxx_destruct;
- (id)init;
- (id)_createAuthorizationsForPasses:(id)a0 fromResponse:(id)a1;
- (id)_createRequestForPasses:(id)a0 migrationToken:(id)a1 nonce:(id)a2;
- (void)createCardMigrationPayloadsForPasses:(id)a0 nonce:(id)a1 migrationToken:(id)a2 authorization:(id)a3 completion:(id /* block */)a4;
- (id)initWithReplyQueue:(id)a0;

@end
