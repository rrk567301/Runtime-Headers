@interface _IMDLegacySpotlightClientStateManager : IMDSpotlightClientStateManager

- (id)init;
- (void)_currentClientStateAllowingFallback:(BOOL)a0 transactionID:(id)a1 withCompletion:(id /* block */)a2;
- (void)_saveClientState:(id)a0 withCompletion:(id /* block */)a1;

@end
