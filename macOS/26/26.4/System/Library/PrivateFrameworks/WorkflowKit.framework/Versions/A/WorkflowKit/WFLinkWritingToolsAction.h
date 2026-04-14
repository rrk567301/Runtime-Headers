@interface WFLinkWritingToolsAction : WFOverridableLinkAction

- (id)requiredResources;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)outputDisclosureLevel;
- (BOOL)visibleForUse:(long long)a0;

@end
