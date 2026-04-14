@interface FCIssueRecordSource : FCRecordSource

+ (BOOL)_useTaggedImages;
+ (id)_URLStringForCoverImageKey:(id)a0 inRecord:(id)a1;

- (id)recordType;
- (int)pbRecordType;
- (id)nonLocalizableKeys;
- (id)localizableKeys;
- (id)alwaysLocalizedKeys;
- (id)storeFilename;
- (unsigned long long)storeVersion;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)recordIDPrefixes;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;

@end
