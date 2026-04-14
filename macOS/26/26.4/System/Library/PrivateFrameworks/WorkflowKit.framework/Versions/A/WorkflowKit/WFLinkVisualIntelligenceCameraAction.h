@interface WFLinkVisualIntelligenceCameraAction : WFOverridableLinkAction <WFStaccatoLinkAction>

- (id)icon;
- (id)localizedNameWithContext:(id)a0;
- (id)requiredResources;
- (BOOL)visibleForUse:(long long)a0;
- (id)staccatoNameOverride;
- (void)prepareToProcessWithCompletionHandler:(id /* block */)a0;

@end
