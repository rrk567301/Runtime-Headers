@interface FCPuzzleTypeRecordSource : FCRecordSource

+ (id)defaultCachePolicy;
+ (char)recognizesRecordID:(id)a0;
+ (id)recordIDPrefixes;

- (id)recordType;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)recordIDPrefixes;
- (id)storeFilename;
- (unsigned long long)storeVersion;

@end
