@class NSArray, NSString, NSDictionary, PGMusicCurationSpecificationOptions;

@interface PGMusicCurationOptions : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *recentlyUsedSongAdamIDs;
@property (readonly, nonatomic) NSArray *recentlyUsedBundledSongIDs;
@property (readonly, nonatomic) NSString *rootMemoryLocalIdentifier;
@property (readonly, nonatomic) char useOnlyMusicForTopicInTopPickSuggestions;
@property (readonly, nonatomic) char includeChillMixInMusicForYou;
@property (readonly, nonatomic) char includeGetUpMixInMusicForYou;
@property (readonly, nonatomic) char shouldRefreshSongMetadata;
@property (readonly, nonatomic) char shouldForceShareableInBestSuggestions;
@property (readonly, nonatomic) char shouldCurateUpNextMemories;
@property (readonly, nonatomic) char shouldUseSpecificationOptionsForCuration;
@property (readonly, nonatomic) char useMemoryCreationMusicCuratorConfiguration;
@property (readonly, nonatomic) NSDictionary *topicKeywordsAndWeights;
@property (readonly, nonatomic) unsigned long long suggestedMood;
@property (readonly, nonatomic) PGMusicCurationSpecificationOptions *musicCurationSpecificationOptions;
@property (readonly, nonatomic) NSString *assetCollectionLocalIdentifier;
@property (readonly, nonatomic) NSString *backingCollectionLocalIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithOptionsDictionary:(id)a0;
- (id)initForMemoryEnrichment;
- (id)initForUpNextMemoryRequestWithOptionsDictionary:(id)a0;
- (id)copyWithAssetCollectionLocalIdentifier:(id)a0;

@end
