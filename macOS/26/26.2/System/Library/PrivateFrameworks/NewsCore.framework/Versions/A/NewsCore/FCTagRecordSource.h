@class NSArray;

@interface FCTagRecordSource : FCRecordSource {
    NSArray *_nonLocalizableKeys;
}

@property (nonatomic) unsigned long long desiredFieldOptions;

- (id)nonLocalizableKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)storeFilename;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)recordType;
- (id)localizableKeys;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 defaultTTL:(double)a4 experimentalizableFieldsPostfix:(id)a5 activeTreatmentID:(id)a6;
- (id)saveTagRecords:(id)a0;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 defaultTTL:(double)a4 desiredTagRecordFieldOptions:(unsigned long long)a5;
- (id)recordIDPrefixes;
- (void).cxx_destruct;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)alwaysLocalizedKeys;
- (unsigned long long)storeVersion;
- (id)localizableExperimentalizableKeys;
- (id)localizableLanguageSpecificKeys;
- (id)experimentalizableKeys;

@end
