@class NSString, NSDictionary, NSArray;

@interface VUISportsScoreboardViewModel : NSObject {
    NSDictionary *_dictionaryRepresentation;
}

@property (readonly, nonatomic) NSString *canonicalId;
@property (readonly, nonatomic) NSDictionary *leagueContext;
@property (readonly, nonatomic) NSArray *scores;
@property (readonly, nonatomic) BOOL showScoreboard;
@property (nonatomic) BOOL configureScoreUpdates;
@property (readonly, nonatomic) BOOL isVersus;
@property (readonly, nonatomic) NSDictionary *contentMetadata;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)jsContextDictionary;
- (void)removeUnicodeFromScoreValuesIfNeeded;

@end
