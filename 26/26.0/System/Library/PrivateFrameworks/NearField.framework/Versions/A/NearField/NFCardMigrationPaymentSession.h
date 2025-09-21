@interface NFCardMigrationPaymentSession : NFSession

- (id)generateMigrationPaymentTokenWithError:(id *)a0;
- (void)performCardMigrationPaymentRequest:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (id)performCardMigrationPaymentRequest:(id)a0 request:(id)a1 error:(id *)a2;

@end
