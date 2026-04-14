@interface FCIssueRecordSource : FCRecordSource

+ (id)_URLStringForCoverImageKey:(id)a0 inRecord:(id)a1;
+ (BOOL)_useTaggedImages;

- (int)pbRecordType;
- (id)storeFilename;
- (unsigned long long)storeVersion;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (id)recordType;
- (id)localizableKeys;
- (id)recordIDPrefixes;
- (id)alwaysLocalizedKeys;

@end
