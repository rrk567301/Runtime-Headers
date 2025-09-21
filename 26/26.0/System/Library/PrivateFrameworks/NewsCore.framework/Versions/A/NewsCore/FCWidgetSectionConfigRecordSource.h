@interface FCWidgetSectionConfigRecordSource : FCRecordSource

- (id)nonLocalizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)storeVersion;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (int)pbRecordType;
- (id)storeFilename;
- (id)recordIDPrefixes;
- (id)recordType;

@end
