@interface FCRecipeRecordSource : FCRecordSource

- (id)nonLocalizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)storeVersion;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (int)pbRecordType;
- (id)storeFilename;
- (id)recordIDPrefixes;
- (id)recordType;
- (id)alwaysLocalizedKeys;
- (id)articleTopicsFromCKRecord:(id)a0 topicIDs:(id)a1 topicFlags:(id)a2;

@end
