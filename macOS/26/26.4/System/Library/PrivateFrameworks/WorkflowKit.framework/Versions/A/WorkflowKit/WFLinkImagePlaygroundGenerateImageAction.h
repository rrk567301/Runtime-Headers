@interface WFLinkImagePlaygroundGenerateImageAction : WFOverridableLinkAction

- (BOOL)showsWhenRun;
- (id)requiredResources;
- (BOOL)visibleForUse:(long long)a0;
- (BOOL)shouldDisableConnectionOperationTimeout;
- (BOOL)showWhenRunParameterIsHidden;

@end
