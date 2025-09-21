@class NSArray, NSString, PEGASUSSchemaPEGASUSSortedScore, PEGASUSSchemaPEGASUSCirAlerts, PEGASUSSchemaPEGASUSDomainCards, NSData;

@interface PEGASUSSchemaPEGASUSCrossIntentRankerResponse : SISchemaInstrumentationMessage {
    struct { unsigned char cirFallbackTriggered : 1; } _has;
}

@property (copy, nonatomic) NSArray *crossDomainRankerScoreKeepers;
@property (copy, nonatomic) NSArray *crossIntentRankerScoreKeepers;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSDomainCards *domainCards;
@property (nonatomic) char hasDomainCards;
@property (copy, nonatomic) NSString *cirPireneConfidenceDebug;
@property (nonatomic) char hasCirPireneConfidenceDebug;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSSortedScore *sortedScore;
@property (nonatomic) char hasSortedScore;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSCirAlerts *cirAlerts;
@property (nonatomic) char hasCirAlerts;
@property (nonatomic) char cirFallbackTriggered;
@property (nonatomic) char hasCirFallbackTriggered;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCirAlerts;
- (void)addCrossDomainRankerScoreKeeper:(id)a0;
- (void)addCrossIntentRankerScoreKeeper:(id)a0;
- (void)clearCrossDomainRankerScoreKeeper;
- (void)clearCrossIntentRankerScoreKeeper;
- (id)crossDomainRankerScoreKeeperAtIndex:(unsigned long long)a0;
- (unsigned long long)crossDomainRankerScoreKeeperCount;
- (id)crossIntentRankerScoreKeeperAtIndex:(unsigned long long)a0;
- (unsigned long long)crossIntentRankerScoreKeeperCount;
- (void)deleteCirFallbackTriggered;
- (void)deleteCirPireneConfidenceDebug;
- (void)deleteCrossDomainRankerScoreKeeper;
- (void)deleteCrossIntentRankerScoreKeeper;
- (void)deleteDomainCards;
- (void)deleteSortedScore;
- (id)suppressMessageUnderConditions;

@end
