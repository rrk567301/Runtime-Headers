@class PGMusicCache, NSString, NSDictionary, PGMusicCurationRecentlyUsedSongs;

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

+ (id)contextWithPhotoLibrary:(id)a0 adamIDsWithNegativeUserFeedback:(id)a1 allowExplicitMusicContent:(id)a2 cache:(id)a3 musicBag:(id)a4 recentlyUsedSongs:(id)a5 genre:(id)a6 isMemoryCreationCuration:(id)a7 configuration:(id)a8 error:(id *)a9;

- (id)init;
- (void).cxx_destruct;
- (id)extractSongIdKeywordMappings:(id *)a0;

@end
