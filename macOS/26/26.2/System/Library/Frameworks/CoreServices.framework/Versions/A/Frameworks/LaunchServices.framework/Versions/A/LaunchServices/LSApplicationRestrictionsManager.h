@class NSSet, NSString;

@interface LSApplicationRestrictionsManager : NSObject {
    NSSet *_ratingRankExceptionBundleIDs;
    NSString *_systemMode;
    NSSet *_removedSystemApplicationIdentifiers;
}

- (void)effectiveSettingsChanged;
- (void).cxx_destruct;

@end
