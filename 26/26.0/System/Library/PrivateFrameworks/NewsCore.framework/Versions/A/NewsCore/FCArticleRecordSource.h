@class NSString, NSArray, NFUnfairLock;

@interface FCArticleRecordSource : FCRecordSource

@property (retain, nonatomic) NFUnfairLock *experimentalFieldsLock;
@property (nonatomic) unsigned long long desiredArticleRecordFieldOptions;
@property (retain, nonatomic) NSString *engagementCohortsExpField;
@property (retain, nonatomic) NSString *conversionCohortsExpField;
@property (retain, nonatomic) NSArray *engagementRecordKeys;
@property (retain, nonatomic) NSArray *conversionRecordKeys;
@property (retain, nonatomic) NSArray *topicFlagsRecordKeys;
@property (retain, nonatomic) NSArray *articleTagMetadataRecordKeys;
@property (retain, nonatomic) NSArray *embeddingRecordKeys;

+ (id)canaryRecordName;
+ (BOOL)supportsDeletions;
+ (BOOL)useTaggedImages;
+ (id)identifierFromCKRecord:(id)a0;
+ (id)modificationDateFromCKRecord:(id)a0;
+ (id)changeTagFromCKRecord:(id)a0;

- (id)nonLocalizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)storeVersion;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)articleTagMetadataFromCKRecord:(id)a0;
- (int)pbRecordType;
- (id)storeFilename;
- (id)engagementFromCKRecord:(id)a0;
- (id)recordIDPrefixes;
- (id)experimentalizableKeys;
- (id)localizableKeys;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 defaultTTL:(double)a4 experimentalizableFieldsPostfix:(id)a5 activeTreatmentID:(id)a6;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 defaultTTL:(double)a4 desiredArticleRecordFieldOptions:(unsigned long long)a5 experimentalizableFieldsPostfix:(id)a6 engagementCohortsExpField:(id)a7 conversionCohortsExpField:(id)a8 activeTreatmentID:(id)a9;
- (id)articleTopicsFromCKRecord:(id)a0 engagement:(id)a1 conversionStats:(id)a2 tagMetadata:(id)a3;
- (id)recordType;
- (id)urlStringForThumbnailKey:(id)a0 inRecord:(id)a1;
- (void)updateEngagementCohortsExpField:(id)a0 conversionCohortsExpField:(id)a1;
- (void)_setEngagementCohortsExpField:(id)a0 conversionCohortsExpField:(id)a1;
- (id)topicFlagsFromCKRecord:(id)a0;
- (id)conversionStatsFromCKRecord:(id)a0;
- (id)alwaysLocalizedKeys;
- (void).cxx_destruct;
- (id)saveArticleRecords:(id)a0;
- (id)saveFeedItemAndArticleRecords:(id)a0;
- (id)localizableExperimentalizableKeys;

@end
