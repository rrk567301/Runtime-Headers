@class NSMutableDictionary;

@interface PerSitePreferencesRegistry : NSObject {
    NSMutableDictionary *_mapOfPreferenceToUserInterfaceInformation;
}

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)userInterfaceInformationForPreference:(id)a0;
- (void)_buildMapIfNeeded;

@end
