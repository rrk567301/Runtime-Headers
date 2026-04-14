@interface WFLinkImagePlaygroundGenerateImageAction : WFOverridableLinkAction

- (BOOL)showsWhenRun;
- (id)requiredResources;
- (BOOL)shouldDisableConnectionOperationTimeout;
- (BOOL)showWhenRunParameterIsHidden;

@end
