@class NSDictionary;

@interface DNDSAppForegroundTriggerConfiguration : NSObject {
    NSDictionary *_bundleIDToModeIdentifierTriggers;
}

- (id)modeIdentifierForBundleIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addTriggerForModeWithIdentifier:(id)a0 onForegroundOfApp:(id)a1;
- (id)triggeringBundleIdentifiers;
- (id)init;

@end
