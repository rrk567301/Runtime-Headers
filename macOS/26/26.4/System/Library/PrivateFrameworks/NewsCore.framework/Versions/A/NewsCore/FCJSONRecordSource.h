@class FCJSONRecordSourceSchema, NFLazy;

@interface FCJSONRecordSource : FCRecordSource <FCJSONRecordSourceType>

@property (copy, nonatomic) FCJSONRecordSourceSchema *schema;
@property (copy, nonatomic) NFLazy *dateFormatter;

- (int)pbRecordType;
- (id)storeFilename;
- (unsigned long long)storeVersion;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (void)fetchRecordsWithIDs:(id)a0 completion:(id /* block */)a1;
- (id)recordType;
- (void)fetchRecordsWithIDs:(id)a0 cachePolicy:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)localizableKeys;
- (id)recordIDPrefixes;
- (id)keyValueRepresentationOfRecord:(id)a0;
- (id)alwaysLocalizedKeys;
- (id)initWithSchema:(id)a0 contentDatabase:(id)a1 contentDirectory:(id)a2 experimentationSuffix:(id)a3 activeTreatmentID:(id)a4;

@end
