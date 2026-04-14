@interface FCIssueListRecordSource : FCRecordSource

- (unsigned long long)lowThresholdDataSizeLimit;
- (id)recordIDPrefixes;
- (unsigned long long)storeVersion;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)recordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)storeFilename;
- (int)pbRecordType;
- (id)nonLocalizableKeys;

@end
