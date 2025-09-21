@class NSURL;

@interface REMDistributedEvaluationCollectionOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char includeListNames;
@property (nonatomic) char includeReminderTitles;
@property (nonatomic) char includeListNameFuzzedEmbeddings;
@property (nonatomic) char includeReminderTitleFuzzedEmbeddings;
@property (nonatomic) char includeSystemLanguage;
@property (nonatomic) char includeSystemTimezone;
@property (nonatomic) char includeAccountType;
@property (nonatomic) char includeListGroupInfo;
@property (nonatomic) char includeReminderTitleSaltedHash;
@property (nonatomic) char includeDates;
@property (nonatomic) char includeDayOfWeek;
@property (nonatomic) char includeRecurrenceInfo;
@property (nonatomic) char includeLocationInfo;
@property (nonatomic) char includeAttachmentUTIs;
@property (nonatomic) char includeRemindMeWhenMessagingInfo;
@property (nonatomic) char includeAlarmDates;
@property (nonatomic) char includeSubtaskInfo;
@property (nonatomic) char includeUserActivityInfo;
@property (nonatomic) char includeIsFlagged;
@property (nonatomic) char includePriority;
@property (nonatomic) char relevantWordTagsIncludeOtherWord;
@property (nonatomic) char includeReminderTitleCategoryFilteredStopWords;
@property (nonatomic) char includeReminderTitleCategoryUniversalGrammar;
@property (nonatomic) char includeReminderTitleCategorySentence2Vec;
@property (nonatomic) double reminderTitleCategoryDistanceTolerance;
@property (retain, nonatomic) NSURL *reminderTitleCategoryEmbeddingURL;
@property (nonatomic) unsigned long long dateResolutionInSeconds;
@property (nonatomic) unsigned long long creationDateWithinDays;

+ (id)_attachmentURLFromFilenameWithKey:(id)a0 inJSONRepresentation:(id)a1 attachmentURLs:(id)a2 error:(id *)a3;
+ (id)optionsFromJSONRepresentation:(id)a0 attachmentURLs:(id)a1 error:(id *)a2;
+ (id)optionsWithDefaultValues;
+ (id)optionsWithEverythingOff;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;

@end
