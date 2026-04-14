@class NSSet, NSString;

@interface LSApplicationRestrictionsManager : NSObject {
    NSSet *_ratingRankExceptionBundleIDs;
    NSString *_systemMode;
    NSSet *_removedSystemApplicationIdentifiers;
}

- (void).cxx_destruct;
- (void)effectiveSettingsChanged;

@end
