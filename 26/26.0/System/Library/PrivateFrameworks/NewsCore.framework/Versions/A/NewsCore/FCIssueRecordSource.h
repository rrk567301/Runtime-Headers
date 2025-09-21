@interface FCIssueRecordSource : FCRecordSource

+ (id)_URLStringForCoverImageKey:(id)a0 inRecord:(id)a1;
+ (BOOL)_useTaggedImages;

- (id)nonLocalizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)storeVersion;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (int)pbRecordType;
- (id)storeFilename;
- (id)recordIDPrefixes;
- (id)localizableKeys;
- (id)recordType;
- (id)alwaysLocalizedKeys;

@end
