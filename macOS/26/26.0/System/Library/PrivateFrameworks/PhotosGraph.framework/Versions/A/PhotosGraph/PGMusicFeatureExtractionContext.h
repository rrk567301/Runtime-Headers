@interface PGMusicFeatureExtractionContext : NSObject {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ songKeywordProvider;
}

@property (nonatomic, readonly) BOOL useMoodKeywords;

+ (id)appleMusicFeatureExtractionContextWithCuratorContext:(id)a0;
+ (id)flexMusicFeatureExtractionContextWithCuratorContext:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
