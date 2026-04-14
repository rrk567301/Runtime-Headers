@interface FCIssueRecordSource : FCRecordSource

+ (id)_URLStringForCoverImageKey:(id)a0 inRecord:(id)a1;
+ (BOOL)_useTaggedImages;

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
- (id)localizableKeys;

@end
