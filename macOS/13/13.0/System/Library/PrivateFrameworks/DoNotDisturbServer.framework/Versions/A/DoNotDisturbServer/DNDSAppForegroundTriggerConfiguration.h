@class NSDictionary;

@interface DNDSAppForegroundTriggerConfiguration : NSObject {
    NSDictionary *_bundleIDToModeIdentifierTriggers;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)triggeringBundleIdentifiers;
- (id)modeIdentifierForBundleIdentifier:(id)a0;
- (void)addTriggerForModeWithIdentifier:(id)a0 onForegroundOfApp:(id)a1;

@end
