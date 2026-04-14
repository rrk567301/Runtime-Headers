@class NSString, NSArray, NSData;

@interface PEGASUSSchemaPEGASUSMultiTurnListSelectionUnderstandingTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *followupQuery;
@property (nonatomic) BOOL hasFollowupQuery;
@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) NSArray *recommendations;
@property (readonly, nonatomic) NSData *jsonData;

- (void)addResults:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)resultsAtIndex:(unsigned long long)a0;
- (unsigned long long)resultsCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearResults;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addRecommendations:(int)a0;
- (void)clearRecommendations;
- (void)deleteFollowupQuery;
- (void)deleteRecommendations;
- (void)deleteResults;
- (int)recommendationsAtIndex:(unsigned long long)a0;
- (unsigned long long)recommendationsCount;

@end
