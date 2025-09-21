@class NSString, NSArray, NSData;

@interface PEGASUSSchemaPEGASUSMultiTurnListSelectionUnderstandingTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *followupQuery;
@property (nonatomic) BOOL hasFollowupQuery;
@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) NSArray *recommendations;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)resultsCount;
- (id)resultsAtIndex:(unsigned long long)a0;
- (void)addResults:(id)a0;
- (void)clearResults;
- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addRecommendations:(int)a0;
- (void)clearRecommendations;
- (void)deleteFollowupQuery;
- (void)deleteRecommendations;
- (void)deleteResults;
- (int)recommendationsAtIndex:(unsigned long long)a0;
- (unsigned long long)recommendationsCount;

@end
