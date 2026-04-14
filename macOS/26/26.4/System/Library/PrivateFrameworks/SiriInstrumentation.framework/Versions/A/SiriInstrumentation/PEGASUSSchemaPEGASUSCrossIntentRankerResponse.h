@class NSArray, NSString, PEGASUSSchemaPEGASUSSortedScore, PEGASUSSchemaPEGASUSCirAlerts, PEGASUSSchemaPEGASUSDomainCards, NSData;

@interface PEGASUSSchemaPEGASUSCrossIntentRankerResponse : SISchemaInstrumentationMessage {
    struct { unsigned char cirFallbackTriggered : 1; } _has;
}

@property (copy, nonatomic) NSArray *crossDomainRankerScoreKeepers;
@property (copy, nonatomic) NSArray *crossIntentRankerScoreKeepers;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSDomainCards *domainCards;
@property (nonatomic) BOOL hasDomainCards;
@property (copy, nonatomic) NSString *cirPireneConfidenceDebug;
@property (nonatomic) BOOL hasCirPireneConfidenceDebug;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSSortedScore *sortedScore;
@property (nonatomic) BOOL hasSortedScore;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSCirAlerts *cirAlerts;
@property (nonatomic) BOOL hasCirAlerts;
@property (nonatomic) BOOL cirFallbackTriggered;
@property (nonatomic) BOOL hasCirFallbackTriggered;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
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

@end
