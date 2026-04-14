@class FCJSONRecordSourceSchema, NFLazy;

@interface FCJSONRecordSource : FCRecordSource <FCJSONRecordSourceType>

@property (copy, nonatomic) FCJSONRecordSourceSchema *schema;
@property (copy, nonatomic) NFLazy *dateFormatter;

- (id)localizableKeys;
- (unsigned long long)storeVersion;
- (id)alwaysLocalizedKeys;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)storeFilename;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (void)fetchRecordsWithIDs:(id)a0 completion:(id /* block */)a1;
- (id)initWithSchema:(id)a0 contentDatabase:(id)a1 contentDirectory:(id)a2 experimentationSuffix:(id)a3 activeTreatmentID:(id)a4;
- (id)recordType;
- (void)fetchRecordsWithIDs:(id)a0 cachePolicy:(id)a1 completion:(id /* block */)a2;
- (id)keyValueRepresentationOfRecord:(id)a0;
- (void).cxx_destruct;
- (id)recordIDPrefixes;

@end
