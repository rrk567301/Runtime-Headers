@interface SSRVoiceProfileStorePrefs : NSObject

+ (id)sharedStorePrefs;

- (void)saveKnownUserVoiceProfiles:(id)a0;
- (void)setVoiceProfileStoreVersion:(unsigned long long)a0;
- (id)loadKnownUserVoiceProfiles;
- (long long)getVoiceProfileStoreVersion;

@end
