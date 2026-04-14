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

+ (BOOL)useTaggedImages;
+ (id)identifierFromCKRecord:(id)a0;
+ (BOOL)supportsDeletions;
+ (id)canaryRecordName;
+ (id)modificationDateFromCKRecord:(id)a0;
+ (id)changeTagFromCKRecord:(id)a0;

- (id)localizableKeys;
- (unsigned long long)storeVersion;
- (id)alwaysLocalizedKeys;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)storeFilename;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 defaultTTL:(double)a4 desiredArticleRecordFieldOptions:(unsigned long long)a5 experimentalizableFieldsPostfix:(id)a6 engagementCohortsExpField:(id)a7 conversionCohortsExpField:(id)a8 activeTreatmentID:(id)a9;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)topicFlagsFromCKRecord:(id)a0;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)saveFeedItemAndArticleRecords:(id)a0;
- (id)urlStringForThumbnailKey:(id)a0 inRecord:(id)a1;
- (id)saveArticleRecords:(id)a0;
- (void)updateEngagementCohortsExpField:(id)a0 conversionCohortsExpField:(id)a1;
- (id)conversionStatsFromCKRecord:(id)a0;
- (id)engagementFromCKRecord:(id)a0;
- (id)recordType;
- (id)articleTagMetadataFromCKRecord:(id)a0;
- (id)experimentalizableKeys;
- (void)_setEngagementCohortsExpField:(id)a0 conversionCohortsExpField:(id)a1;
- (id)localizableExperimentalizableKeys;
- (void).cxx_destruct;
- (id)articleTopicsFromCKRecord:(id)a0 engagement:(id)a1 conversionStats:(id)a2 tagMetadata:(id)a3;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 defaultTTL:(double)a4 experimentalizableFieldsPostfix:(id)a5 activeTreatmentID:(id)a6;
- (id)recordIDPrefixes;

@end
