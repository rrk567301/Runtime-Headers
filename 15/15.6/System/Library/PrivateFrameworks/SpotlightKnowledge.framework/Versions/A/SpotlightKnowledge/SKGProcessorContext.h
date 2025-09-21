@class NSString;

@interface SKGProcessorContext : NSObject {
    NSString *_bundleIdentifier;
    NSString *_spotlightResourcesRoot;
}

@property (readonly, nonatomic) char enablePeople;
@property (readonly, nonatomic) char enableKeyphrases;
@property (readonly, nonatomic) char enableEmbeddings;
@property (readonly, nonatomic) char enableCalendarEventClassification;
@property (readonly, nonatomic) char enableExtractions;
@property (readonly, nonatomic) char enableSuggestedEvents;
@property (readonly, nonatomic) char enableDocumentUnderstanding;
@property (readonly, nonatomic) char enableMegadomePeople;
@property (readonly, nonatomic) char enableAppEntities;
@property (readonly, nonatomic) char enableEventUpdater;
@property (readonly, nonatomic) char enablePreExtractionScanning;
@property (readonly, nonatomic) long long knowledgeVersion;
@property (readonly, nonatomic) long long keyphraseVersion;
@property (readonly, nonatomic) long long breadcrumbsVersion;
@property (readonly, nonatomic) long long embeddingVersion;
@property (readonly, nonatomic) long long embeddingModelVersion;
@property (readonly, nonatomic) long long suggestedEventsVersion;
@property (readonly, nonatomic) long long documentUnderstandingVersion;
@property (readonly, nonatomic) long long releaseVersion;
@property (readonly, nonatomic) long long textVersion;
@property (readonly, nonatomic) long long graphVersion;
@property (nonatomic) long long maxGraphSize;
@property (nonatomic) long long maxArchiveSize;
@property (nonatomic) long long maxJournalSize;
@property (nonatomic) long long maxJournalSizeForPurge;
@property (nonatomic) long long maxJournalSizeWhenLowDiskSpace;
@property (nonatomic) unsigned long long maxQueryUpdatesSize;
@property (nonatomic) long long maxJournalSizeInQueue;
@property (nonatomic) long long journalSizeGetBelowLimit;
@property (nonatomic) long long maxEntityCount;
@property (nonatomic) long long maxKeyphraseCount;
@property (nonatomic) long long maxQueryItemCount;
@property (nonatomic) long long maxItemBatchCount;
@property (nonatomic) long long maxJournalItemCount;
@property (nonatomic) long long redonationThrottleHorizonDate;
@property (nonatomic) long long currentRedonationDate;
@property (nonatomic) long long redonationRepeatCap;

+ (id)sharedContext;

- (id)init;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)fetchAttributes;
- (id)docUnderstandingFetchAttributes;
- (void)commonInitWithBundleIdentifier:(id)a0;
- (id)cleanupAttributes;
- (id)docUnderstandingExtractionAttributes;
- (id)docUnderstandingIncludeBundles;
- (id)docUnderstandingItemDomainIds;
- (id)docUnderstandingTrackingAttributes;
- (id)embeddingExcludeBundles;
- (id)embeddingExcludeContentTypes;
- (id)embeddingExcludeDomainIdentifier;
- (id)embeddingExtractionAttributes;
- (id)embeddingFetchAttributes;
- (id)embeddingTrackingAttributes;
- (id)excludeBundles;
- (id)initWithPreferredLanguages:(id)a0 locale:(id)a1;
- (id)keyphraseExcludeBundles;
- (id)keyphraseExcludeDomains;
- (id)keyphraseExtractionAttributes;
- (id)keyphraseFetchAttributes;
- (id)keyphraseIncludeBundles;
- (id)keyphraseOptionalExtractionAttributes;
- (id)keyphraseTrackingAttributes;
- (char)keyphrasesSupportsBundle:(id)a0 domainID:(id)a1;
- (id)peopleExcludeBundles;
- (id)peopleExtractionAttributes;
- (id)peopleFetchAttributes;
- (id)peoplePreferredBundles;
- (id)reindexExcludeBundles;
- (id)suggestedEventsAllowListAttributes;
- (id)suggestedEventsExtractionAttributes;
- (id)suggestedEventsFetchAttributes;
- (id)suggestedEventsIncludeBundles;
- (id)suggestedEventsTrackingAttributes;

@end
