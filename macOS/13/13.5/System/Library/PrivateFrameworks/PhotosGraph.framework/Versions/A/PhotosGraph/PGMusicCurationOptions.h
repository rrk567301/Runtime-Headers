@class NSArray, NSString;

@interface PGMusicCurationOptions : NSObject

@property (readonly, nonatomic) NSArray *recentlyUsedSongAdamIDs;
@property (readonly, nonatomic) NSArray *recentlyUsedBundledSongIDs;
@property (readonly, nonatomic) NSString *rootMemoryLocalIdentifier;
@property (readonly, nonatomic) BOOL useOnlyMusicForTopicInTopPickSuggestions;
@property (readonly, nonatomic) BOOL includeChillMixInMusicForYou;
@property (readonly, nonatomic) BOOL includeGetUpMixInMusicForYou;
@property (readonly, nonatomic) BOOL shouldRefreshSongMetadata;
@property (readonly, nonatomic) BOOL shouldForceShareableInBestSuggestions;
@property (readonly, nonatomic) BOOL shouldCurateUpNextMemories;

- (void).cxx_destruct;
- (id)initWithOptionsDictionary:(id)a0;
- (id)initForMemoryEnrichment;
- (id)initForUpNextMemoryRequestWithOptionsDictionary:(id)a0;

@end
