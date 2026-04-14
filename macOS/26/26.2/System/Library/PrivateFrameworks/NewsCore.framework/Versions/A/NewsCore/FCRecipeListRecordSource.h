@interface FCRecipeListRecordSource : FCRecordSource

- (id)nonLocalizableKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)storeFilename;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)recordType;
- (id)recordIDPrefixes;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)storeVersion;

@end
