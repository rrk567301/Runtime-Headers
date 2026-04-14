@class NSString, NSDictionary, NSArray, NSDate;

@interface VUISportsScoreboardViewModel : NSObject {
    NSDictionary *_dictionaryRepresentation;
    BOOL _suppressed;
}

@property (readonly, nonatomic) NSString *canonicalId;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSString *leagueId;
@property (readonly, nonatomic) NSDictionary *leagueContext;
@property (readonly, nonatomic) NSArray *scores;
@property (readonly, nonatomic) BOOL showScoreboard;
@property (nonatomic) BOOL configureScoreUpdates;
@property (readonly, nonatomic) BOOL isVersus;
@property (readonly, nonatomic) BOOL hasEventEnded;
@property (readonly, nonatomic) NSDate *lastUpdatedTime;
@property (readonly, nonatomic) NSDictionary *contentMetadata;
@property (readonly, nonatomic) NSString *scoreInfoText1;
@property (readonly, nonatomic) NSString *scoreInfoText3;
@property (readonly, nonatomic) NSString *scoreInfoText2;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsContextDictionary;
- (void)removeUnicodeFromScoreValuesIfNeeded;
- (id)valueFromDictionaryForKey:(id)a0;

@end
