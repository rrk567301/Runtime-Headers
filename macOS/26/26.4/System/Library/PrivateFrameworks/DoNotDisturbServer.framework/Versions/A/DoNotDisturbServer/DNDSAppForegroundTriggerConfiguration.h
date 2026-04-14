@class NSDictionary;

@interface DNDSAppForegroundTriggerConfiguration : NSObject {
    NSDictionary *_bundleIDToModeIdentifierTriggers;
}

- (id)modeIdentifierForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)addTriggerForModeWithIdentifier:(id)a0 onForegroundOfApp:(id)a1;
- (id)init;
- (id)description;
- (id)triggeringBundleIdentifiers;

@end
