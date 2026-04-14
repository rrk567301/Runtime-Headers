@interface FCRecipeRecordSource : FCRecordSource

- (unsigned long long)lowThresholdDataSizeLimit;
- (id)alwaysLocalizedKeys;
- (id)recordIDPrefixes;
- (unsigned long long)storeVersion;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)recordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)storeFilename;
- (int)pbRecordType;
- (id)nonLocalizableKeys;
- (id)articleTopicsFromCKRecord:(id)a0 topicIDs:(id)a1 topicFlags:(id)a2;

@end
