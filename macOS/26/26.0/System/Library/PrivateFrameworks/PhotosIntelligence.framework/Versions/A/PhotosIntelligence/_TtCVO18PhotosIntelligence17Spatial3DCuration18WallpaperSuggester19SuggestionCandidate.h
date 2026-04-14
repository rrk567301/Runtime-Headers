@class NSDate;

@interface _TtCVO18PhotosIntelligence17Spatial3DCuration18WallpaperSuggester19SuggestionCandidate : NSObject <PNWallpaperSuggestionCandidate> {
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ creationDate;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
