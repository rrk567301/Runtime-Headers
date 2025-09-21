@interface FCSportsEventRecordSource : FCRecordSource

+ (id)recordIDPrefixes;
+ (BOOL)recognizesRecordID:(id)a0;

- (id)nonLocalizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)storeVersion;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)localizableLanguageSpecificKeys;
- (int)pbRecordType;
- (id)storeFilename;
- (id)recordIDPrefixes;
- (id)localizableKeys;
- (id)recordType;

@end
