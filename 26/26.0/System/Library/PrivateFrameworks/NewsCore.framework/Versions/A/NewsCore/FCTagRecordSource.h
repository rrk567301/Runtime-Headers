@class NSArray;

@interface FCTagRecordSource : FCRecordSource {
    NSArray *_nonLocalizableKeys;
}

@property (nonatomic) unsigned long long desiredFieldOptions;

- (id)nonLocalizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)storeVersion;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)localizableLanguageSpecificKeys;
- (int)pbRecordType;
- (id)storeFilename;
- (id)recordIDPrefixes;
- (id)experimentalizableKeys;
- (id)localizableKeys;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 defaultTTL:(double)a4 experimentalizableFieldsPostfix:(id)a5 activeTreatmentID:(id)a6;
- (id)recordType;
- (id)saveTagRecords:(id)a0;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 defaultTTL:(double)a4 desiredTagRecordFieldOptions:(unsigned long long)a5;
- (id)alwaysLocalizedKeys;
- (void).cxx_destruct;
- (id)localizableExperimentalizableKeys;

@end
