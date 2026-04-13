@interface FCAudioConfigRecordSource : FCRecordSource

- (id)recordType;
- (int)pbRecordType;
- (id)nonLocalizableKeys;
- (id)storeFilename;
- (unsigned long long)storeVersion;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)recordIDPrefixes;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;

@end
