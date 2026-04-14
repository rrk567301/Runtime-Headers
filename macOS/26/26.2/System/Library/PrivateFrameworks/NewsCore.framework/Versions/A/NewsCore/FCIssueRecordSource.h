@interface FCIssueRecordSource : FCRecordSource

+ (id)_URLStringForCoverImageKey:(id)a0 inRecord:(id)a1;
+ (BOOL)_useTaggedImages;

- (id)nonLocalizableKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)storeFilename;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)recordType;
- (id)localizableKeys;
- (id)recordIDPrefixes;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)alwaysLocalizedKeys;
- (unsigned long long)storeVersion;

@end
