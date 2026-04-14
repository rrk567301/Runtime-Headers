@class NSString;

@interface SKGProcessorContext : NSObject {
    NSString *_bundleIdentifier;
    NSString *_spotlightResourcesRoot;
}

@property (readonly, nonatomic) BOOL enablePeople;
@property (readonly, nonatomic) BOOL enableKeyphrases;
@property (readonly, nonatomic) BOOL enableEmbeddings;
@property (readonly, nonatomic) long long knowledgeVersion;
@property (readonly, nonatomic) long long keyphraseVersion;
@property (readonly, nonatomic) long long embeddingVersion;
@property (readonly, nonatomic) long long embeddingModelVersion;
@property (readonly, nonatomic) long long releaseVersion;
@property (readonly, nonatomic) long long textVersion;
@property (readonly, nonatomic) long long graphVersion;
@property (readonly, nonatomic) NSString *corespotlightResourcesPath;
@property (readonly, nonatomic) NSString *corespotlightResourcesRootPath;
@property (nonatomic) long long maxGraphSize;
@property (nonatomic) long long maxArchiveSize;
@property (nonatomic) long long maxJournalSize;

+ (id)sharedContext;

- (id)init;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)fetchAttributes;
- (void)commonInitWithResourcePath:(id)a0 bundleIdentifier:(id)a1;
- (id)embeddingExcludeBundles;
- (id)embeddingExtractionAttributes;
- (id)embeddingFetchAttributes;
- (id)excludeBundles;
- (id)initWithResourceDirectoryPath:(id)a0 preferredLanguages:(id)a1 locale:(id)a2;
- (id)keyphraseExcludeBundles;
- (id)keyphraseExtractionAttributes;
- (id)keyphraseFetchAttributes;
- (id)peopleExcludeBundles;
- (id)peopleExtractionAttributes;
- (id)peopleFetchAttributes;
- (id)peoplePreferredBundles;
- (id)spotlightResourcesRootPath;

@end
