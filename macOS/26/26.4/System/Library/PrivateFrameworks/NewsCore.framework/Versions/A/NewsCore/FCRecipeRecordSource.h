@interface FCRecipeRecordSource : FCRecordSource

- (int)pbRecordType;
- (id)storeFilename;
- (unsigned long long)storeVersion;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (id)recordType;
- (id)recordIDPrefixes;
- (id)alwaysLocalizedKeys;
- (id)articleTopicsFromCKRecord:(id)a0 topicIDs:(id)a1 topicFlags:(id)a2;

@end
