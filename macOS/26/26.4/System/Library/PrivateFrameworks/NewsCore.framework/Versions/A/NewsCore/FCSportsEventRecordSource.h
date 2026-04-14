@interface FCSportsEventRecordSource : FCRecordSource

+ (id)recordIDPrefixes;
+ (BOOL)recognizesRecordID:(id)a0;

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
- (id)localizableLanguageSpecificKeys;

@end
