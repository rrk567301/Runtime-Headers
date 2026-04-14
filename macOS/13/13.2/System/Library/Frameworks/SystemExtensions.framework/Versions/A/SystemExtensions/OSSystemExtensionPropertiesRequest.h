@interface OSSystemExtensionPropertiesRequest : OSSystemExtensionRequest

- (void)failedWithError:(id)a0;
- (void)replyWithProperties:(id)a0;
- (void)didConnectToDaemon;

@end
