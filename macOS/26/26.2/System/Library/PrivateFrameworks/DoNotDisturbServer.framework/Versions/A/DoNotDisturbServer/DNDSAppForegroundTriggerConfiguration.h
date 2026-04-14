@class NSDictionary;

@interface DNDSAppForegroundTriggerConfiguration : NSObject {
    NSDictionary *_bundleIDToModeIdentifierTriggers;
}

- (void)addTriggerForModeWithIdentifier:(id)a0 onForegroundOfApp:(id)a1;
- (void).cxx_destruct;
- (id)modeIdentifierForBundleIdentifier:(id)a0;
- (id)description;
- (id)triggeringBundleIdentifiers;
- (id)init;

@end
