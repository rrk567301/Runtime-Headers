@class AAAgeMigrationDaemonConnection;

@interface AAAgeMigrationController : NSObject <AAAgeMigrationInterface> {
    AAAgeMigrationDaemonConnection *_daemonConnection;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)clearAgeMigrationFollowUpWithCompletion:(id /* block */)a0;
- (void)clearUserAcknowledgeMisconfiguredAgedPromptWithContext:(id)a0 completion:(id /* block */)a1;
- (void)didUserAcknowledgeMisconfiguredAgedPromptWithContext:(id)a0 completion:(id /* block */)a1;
- (void)displayMisconfiguredAgePromptWithContext:(id)a0 completion:(id /* block */)a1;
- (void)saveUserAcknowledgeMisconfiguredAgedPromptWithContext:(id)a0 action:(int)a1 completion:(id /* block */)a2;

@end
