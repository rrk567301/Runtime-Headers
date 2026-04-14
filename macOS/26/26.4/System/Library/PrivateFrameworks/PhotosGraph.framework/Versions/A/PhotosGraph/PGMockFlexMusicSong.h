@class NSString, NSDictionary, NSNumber;

@interface PGMockFlexMusicSong : NSObject <PGFlexMusicSong> {
    void /* function */ uid;
    void /* unknown type, empty encoding */ _hidden;
    void /* unknown type, empty encoding */ _artistName;
    void /* unknown type, empty encoding */ _songName;
    void /* unknown type, empty encoding */ _keywords;
    void /* unknown type, empty encoding */ _tagIDs;
    void /* function */ weightedKeywords;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *uid;
@property (nonatomic, readonly) BOOL recalled;
@property (nonatomic, readonly) BOOL canPlay;
@property (nonatomic, readonly) NSDictionary *weightedKeywords;
@property (nonatomic, readonly) NSNumber *valence;
@property (nonatomic, readonly) NSNumber *arousal;
@property (nonatomic, readonly) NSString *mood;

- (id)keywords;
- (id)regions;
- (void).cxx_destruct;
- (id)artistName;
- (id)init;
- (id)tagIDs;
- (BOOL)hidden;
- (id)songName;

@end
