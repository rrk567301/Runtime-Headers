@class NSSet;

@interface LSApplicationRestrictionsManager : NSObject {
    NSSet *_removedSystemApplicationIdentifiers;
}

- (void).cxx_destruct;
- (void)effectiveSettingsChanged;

@end
