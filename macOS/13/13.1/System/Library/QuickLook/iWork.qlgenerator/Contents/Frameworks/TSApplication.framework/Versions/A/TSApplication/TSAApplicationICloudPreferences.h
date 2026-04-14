@interface TSAApplicationICloudPreferences : TSKApplicationICloudPreferences

@property (readonly, nonatomic) BOOL hasIWorkAuthorName;

- (void)p_ubiquitousKeyValueStoreDidChange:(id)a0;
- (void)registerICloudPreferences;
- (id)documentPreferenceKeyPrefix;
- (void)clearICloudDocumentPreferences;
- (void)clearIWorkAuthorName;
- (void)clearIWorkAuthorColorIndex;
- (id)collaboratorNameForDocumentInfo:(id)a0 firstName:(id *)a1 lastName:(id *)a2;
- (unsigned long long)collaboratorColorIndexForKvsDocumentKey:(id)a0;
- (id)iCloudPreferenceKeys;
- (id)iCloudDocumentPreferenceKeyForKvsDocumentKey:(id)a0 isMatchingKey:(BOOL *)a1;
- (BOOL)isICloudDocumentPreference:(id)a0 validForKey:(id)a1;
- (id)validICloudPreferencesForPreferences:(id)a0 invalidKeys:(id *)a1;
- (id)preferencesForKvsDocumentKey:(id)a0;
- (void)setPreferences:(id)a0 forKvsDocumentKey:(id)a1;
- (void)setIWorkAuthorName:(id)a0;
- (id)iWorkAuthorName;
- (unsigned long long)iWorkAuthorColorIndex;
- (void)setIWorkAuthorColorIndex:(unsigned long long)a0;
- (BOOL)isValidIWorkAuthorColorIndex:(unsigned long long)a0;
- (void)clearIWorkAuthorPrivateID;
- (id)iWorkAuthorPrivateIDsAndMetadata;
- (void)setIWorkAuthorPrivateIDsAndMetadata:(id)a0;

@end
