@interface SSRVoiceProfileStorePrefs : NSObject

+ (id)sharedStorePrefs;

- (void)applyContentsToVoiceProfileStorePrefs:(id)a0;
- (id)getAllContentsOfVoiceProfileStorePrefs;
- (long long)getVoiceProfileStoreVersion;
- (id)loadKnownUserVoiceProfiles;
- (void)saveKnownUserVoiceProfiles:(id)a0;
- (void)setVoiceProfileStoreVersion:(unsigned long long)a0;

@end
