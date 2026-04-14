@interface OSSystemExtensionPropertiesRequest : OSSystemExtensionRequest

- (void)failedWithError:(id)a0;
- (void)didConnectToDaemon;
- (void)replyWithProperties:(id)a0;

@end
