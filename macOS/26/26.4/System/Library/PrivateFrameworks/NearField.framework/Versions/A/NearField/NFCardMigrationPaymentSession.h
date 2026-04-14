@interface NFCardMigrationPaymentSession : NFSession

- (id)performCardMigrationPaymentRequest:(id)a0 request:(id)a1 error:(id *)a2;
- (id)generateMigrationPaymentTokenWithError:(id *)a0;
- (void)performCardMigrationPaymentRequest:(id)a0 request:(id)a1 completion:(id /* block */)a2;

@end
