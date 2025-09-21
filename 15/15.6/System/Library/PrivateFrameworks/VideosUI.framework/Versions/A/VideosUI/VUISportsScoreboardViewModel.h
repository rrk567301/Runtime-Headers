@class NSString, NSDictionary, NSArray, NSDate;

@interface VUISportsScoreboardViewModel : NSObject {
    NSDictionary *_dictionaryRepresentation;
    char _suppressed;
}

@property (readonly, nonatomic) NSString *canonicalId;
@property (readonly, nonatomic) NSString *leagueId;
@property (readonly, nonatomic) NSDictionary *leagueContext;
@property (readonly, nonatomic) NSArray *scores;
@property (readonly, nonatomic) char showScoreboard;
@property (nonatomic) char configureScoreUpdates;
@property (readonly, nonatomic) char isVersus;
@property (readonly, nonatomic) char hasEventEnded;
@property (readonly, nonatomic) NSDate *lastUpdatedTime;
@property (readonly, nonatomic) NSDictionary *contentMetadata;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)jsContextDictionary;
- (void)removeUnicodeFromScoreValuesIfNeeded;

@end
