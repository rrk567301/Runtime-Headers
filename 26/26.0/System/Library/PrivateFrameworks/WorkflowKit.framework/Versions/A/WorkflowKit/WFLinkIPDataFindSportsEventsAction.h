@interface WFLinkIPDataFindSportsEventsAction : WFOverridableLinkAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (id)icon;
- (id)requiredResources;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)outputDisclosureLevel;
- (id)parameterOverrides;

@end
