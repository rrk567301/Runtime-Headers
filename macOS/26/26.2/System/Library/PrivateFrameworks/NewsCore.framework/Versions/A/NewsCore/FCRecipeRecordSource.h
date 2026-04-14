@interface FCRecipeRecordSource : FCRecordSource

- (id)nonLocalizableKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)storeFilename;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)recordType;
- (id)recordIDPrefixes;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)alwaysLocalizedKeys;
- (unsigned long long)storeVersion;
- (id)articleTopicsFromCKRecord:(id)a0 topicIDs:(id)a1 topicFlags:(id)a2;

@end
