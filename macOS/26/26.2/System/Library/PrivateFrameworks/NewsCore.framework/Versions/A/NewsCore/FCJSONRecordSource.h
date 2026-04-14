@class FCJSONRecordSourceSchema, NFLazy;

@interface FCJSONRecordSource : FCRecordSource <FCJSONRecordSourceType>

@property (copy, nonatomic) FCJSONRecordSourceSchema *schema;
@property (copy, nonatomic) NFLazy *dateFormatter;

- (id)nonLocalizableKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)storeFilename;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)recordType;
- (id)localizableKeys;
- (id)initWithSchema:(id)a0 contentDatabase:(id)a1 contentDirectory:(id)a2 experimentationSuffix:(id)a3 activeTreatmentID:(id)a4;
- (void)fetchRecordsWithIDs:(id)a0 cachePolicy:(id)a1 completion:(id /* block */)a2;
- (id)recordIDPrefixes;
- (void).cxx_destruct;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)keyValueRepresentationOfRecord:(id)a0;
- (id)alwaysLocalizedKeys;
- (unsigned long long)storeVersion;
- (void)fetchRecordsWithIDs:(id)a0 completion:(id /* block */)a1;

@end
