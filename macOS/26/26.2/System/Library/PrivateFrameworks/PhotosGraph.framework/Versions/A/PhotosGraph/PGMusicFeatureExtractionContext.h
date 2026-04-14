@class NSString;

@interface PGMusicFeatureExtractionContext : NSObject {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* function */ flexSongProvider;
    void /* unknown type, empty encoding */ songKeywordProvider;
}

@property (nonatomic, readonly) BOOL useMoodKeywords;
@property (nonatomic, readonly) NSString *flexSongProvider;

+ (id)appleMusicFeatureExtractionContextWithCuratorContext:(id)a0;
+ (id)flexMusicFeatureExtractionContextWithCuratorContext:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
