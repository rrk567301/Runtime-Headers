@interface WFLinkCalculateAppUsageIntentAction : WFOverridableLinkAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (id)iconSymbolName;
- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (id)iconBackgroundColorName;
- (id)iconSymbolColorName;
- (id)outputOriginDisplayableAppBundleIdentifier;

@end
