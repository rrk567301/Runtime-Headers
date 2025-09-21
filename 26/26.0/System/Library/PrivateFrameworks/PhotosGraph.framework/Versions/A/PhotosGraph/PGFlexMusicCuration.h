@class NSArray, NSString;

@interface PGFlexMusicCuration : NSObject {
    void /* unknown type, empty encoding */ curatorVersion;
    void /* function */ bestSongSuggestions;
    void /* function */ secondarySongSuggestions;
}

@property (nonatomic, readonly) NSArray *bestSongSuggestions;
@property (nonatomic, readonly) NSArray *secondarySongSuggestions;
@property (nonatomic, readonly) NSString *description;

- (id)jsonRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)expandedJsonRepresentation;
- (id)replaceBestSongSuggestionsWithFlexSongIds:(id)a0;
- (id)replaceFirstSongInBestSongSuggestionsWith:(id)a0;

@end
