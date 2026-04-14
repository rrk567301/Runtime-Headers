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

+ (id)modificationDateFromCKRecord:(id)a0;
+ (BOOL)useTaggedImages;
+ (id)canaryRecordName;
+ (id)identifierFromCKRecord:(id)a0;
+ (id)changeTagFromCKRecord:(id)a0;
+ (BOOL)supportsDeletions;

- (unsigned long long)lowThresholdDataSizeLimit;
- (id)alwaysLocalizedKeys;
- (id)recordIDPrefixes;
- (unsigned long long)storeVersion;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)recordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)storeFilename;
- (id)saveArticleRecords:(id)a0;
- (int)pbRecordType;
- (id)nonLocalizableKeys;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 defaultTTL:(double)a4 desiredArticleRecordFieldOptions:(unsigned long long)a5 experimentalizableFieldsPostfix:(id)a6 engagementCohortsExpField:(id)a7 conversionCohortsExpField:(id)a8 activeTreatmentID:(id)a9;
- (void)_setEngagementCohortsExpField:(id)a0 conversionCohortsExpField:(id)a1;
- (void)updateEngagementCohortsExpField:(id)a0 conversionCohortsExpField:(id)a1;
- (id)experimentalizableKeys;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 defaultTTL:(double)a4 experimentalizableFieldsPostfix:(id)a5 activeTreatmentID:(id)a6;
- (id)engagementFromCKRecord:(id)a0;
- (id)articleTagMetadataFromCKRecord:(id)a0;
- (id)saveFeedItemAndArticleRecords:(id)a0;
- (id)urlStringForThumbnailKey:(id)a0 inRecord:(id)a1;
- (id)localizableKeys;
- (void).cxx_destruct;
- (id)topicFlagsFromCKRecord:(id)a0;
- (id)localizableExperimentalizableKeys;
- (id)articleTopicsFromCKRecord:(id)a0 engagement:(id)a1 conversionStats:(id)a2 tagMetadata:(id)a3;
- (id)conversionStatsFromCKRecord:(id)a0;

@end
