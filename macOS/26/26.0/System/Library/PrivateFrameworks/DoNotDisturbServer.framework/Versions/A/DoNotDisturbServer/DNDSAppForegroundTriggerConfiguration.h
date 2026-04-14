@class NSDictionary;

@interface DNDSAppForegroundTriggerConfiguration : NSObject {
    NSDictionary *_bundleIDToModeIdentifierTriggers;
}

- (id)triggeringBundleIdentifiers;
- (id)init;
- (id)description;
- (void)addTriggerForModeWithIdentifier:(id)a0 onForegroundOfApp:(id)a1;
- (id)modeIdentifierForBundleIdentifier:(id)a0;
- (void).cxx_destruct;

@end
