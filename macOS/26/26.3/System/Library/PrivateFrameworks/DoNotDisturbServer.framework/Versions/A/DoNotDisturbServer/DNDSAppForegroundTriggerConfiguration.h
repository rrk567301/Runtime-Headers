@class NSDictionary;

@interface DNDSAppForegroundTriggerConfiguration : NSObject {
    NSDictionary *_bundleIDToModeIdentifierTriggers;
}

- (id)modeIdentifierForBundleIdentifier:(id)a0;
- (id)description;
- (id)init;
- (id)triggeringBundleIdentifiers;
- (void)addTriggerForModeWithIdentifier:(id)a0 onForegroundOfApp:(id)a1;
- (void).cxx_destruct;

@end
