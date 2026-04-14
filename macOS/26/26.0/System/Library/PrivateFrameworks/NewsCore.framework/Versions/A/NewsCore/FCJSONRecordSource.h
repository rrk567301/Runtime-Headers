@class FCJSONRecordSourceSchema, NFLazy;

@interface FCJSONRecordSource : FCRecordSource <FCJSONRecordSourceType>

@property (copy, nonatomic) FCJSONRecordSourceSchema *schema;
@property (copy, nonatomic) NFLazy *dateFormatter;

- (id)nonLocalizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)storeVersion;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (int)pbRecordType;
- (id)storeFilename;
- (id)recordIDPrefixes;
- (void)fetchRecordsWithIDs:(id)a0 completion:(id /* block */)a1;
- (id)localizableKeys;
- (void)fetchRecordsWithIDs:(id)a0 cachePolicy:(id)a1 completion:(id /* block */)a2;
- (id)recordType;
- (id)initWithSchema:(id)a0 contentDatabase:(id)a1 contentDirectory:(id)a2 experimentationSuffix:(id)a3 activeTreatmentID:(id)a4;
- (id)keyValueRepresentationOfRecord:(id)a0;
- (id)alwaysLocalizedKeys;
- (void).cxx_destruct;

@end
