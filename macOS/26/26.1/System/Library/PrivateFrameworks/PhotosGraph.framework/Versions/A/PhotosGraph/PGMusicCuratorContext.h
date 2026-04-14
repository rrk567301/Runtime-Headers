@class PGMusicCache, NSString, NSDictionary, PGMusicCurationRecentlyUsedSongs;
@protocol PGFlexMusicSongProviderProtocol;

@interface PGMusicCuratorContext : NSObject {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ blocklistConfiguration;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ musicBag;
    void /* unknown type, empty encoding */ adamIDsWithNegativeUserFeedback;
    void /* unknown type, empty encoding */ allowExplicitMusicContent;
    void /* unknown type, empty encoding */ keywordsForAdamId;
    void /* function */ musicCurationOverrideDictionary;
    void /* function */ genre;
    void /* unknown type, empty encoding */ musicForTopicUseTopicOnly;
    void /* unknown type, empty encoding */ $__lazy_storage_$_keywordsByAdamID;
    void /* unknown type, empty encoding */ $__lazy_storage_$_flexMusicSongs;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) PGMusicCache *cache;
@property (nonatomic) BOOL useOnlyMusicForTopicInTopPickSuggestions;
@property (nonatomic) BOOL allowChillMixElection;
@property (nonatomic) BOOL allowGetUpMixElection;
@property (nonatomic) BOOL refreshSongMetadata;
@property (nonatomic) BOOL forceShareableInBestSuggestions;
@property (nonatomic, readonly) PGMusicCurationRecentlyUsedSongs *recentlyUsedSongs;
@property (nonatomic, copy) NSDictionary *musicCurationOverrideDictionary;
@property (nonatomic) BOOL bypassMusicForTopicElection;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic) BOOL isMemoryCreationCuration;
@property (nonatomic, retain) id<PGFlexMusicSongProviderProtocol> flexSongProvider;

+ (id)contextWithPhotoLibrary:(id)a0 adamIDsWithNegativeUserFeedback:(id)a1 allowExplicitMusicContent:(id)a2 cache:(id)a3 musicBag:(id)a4 flexProviderName:(id)a5 recentlyUsedSongs:(id)a6 genre:(id)a7 isMemoryCreationCuration:(id)a8 configuration:(id)a9 error:(id *)a10;

- (void).cxx_destruct;
- (id)init;
- (id)extractSongIdKeywordMappings:(id *)a0;

@end
