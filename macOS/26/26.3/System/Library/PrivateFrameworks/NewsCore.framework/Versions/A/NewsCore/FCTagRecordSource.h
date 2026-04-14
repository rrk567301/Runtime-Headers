@class NSArray;

@interface FCTagRecordSource : FCRecordSource {
    NSArray *_nonLocalizableKeys;
}

@property (nonatomic) unsigned long long desiredFieldOptions;

- (unsigned long long)lowThresholdDataSizeLimit;
- (id)alwaysLocalizedKeys;
- (id)recordIDPrefixes;
- (unsigned long long)storeVersion;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)recordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)storeFilename;
- (int)pbRecordType;
- (id)nonLocalizableKeys;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 defaultTTL:(double)a4 desiredTagRecordFieldOptions:(unsigned long long)a5;
- (id)experimentalizableKeys;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 defaultTTL:(double)a4 experimentalizableFieldsPostfix:(id)a5 activeTreatmentID:(id)a6;
- (id)localizableLanguageSpecificKeys;
- (id)localizableKeys;
- (void).cxx_destruct;
- (id)localizableExperimentalizableKeys;
- (id)saveTagRecords:(id)a0;

@end
