@interface FCSportsEventRecordSource : FCRecordSource

+ (id)recordIDPrefixes;
+ (BOOL)recognizesRecordID:(id)a0;

- (id)localizableKeys;
- (unsigned long long)storeVersion;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)storeFilename;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)recordType;
- (id)localizableLanguageSpecificKeys;
- (id)recordIDPrefixes;

@end
