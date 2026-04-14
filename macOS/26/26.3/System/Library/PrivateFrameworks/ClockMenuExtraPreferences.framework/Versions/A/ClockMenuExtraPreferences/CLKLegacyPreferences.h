@class NSDictionary;

@interface CLKLegacyPreferences : NSObject {
    NSDictionary *preferencesDictionary;
}

+ (id)legacyPreferencesIfAvailable;

- (id)init;
- (void)dealloc;
- (id)preferencesDictionary;
- (void)removeLegacyPreferencesFile;

@end
