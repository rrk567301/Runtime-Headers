@class NSArray, NSData;

@interface FLOWSchemaFLOWCrossIntentRankerResponse : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *crossDomainRankerScoreKeepers;
@property (copy, nonatomic) NSArray *crossIntentRankerScoreKeepers;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addCrossDomainRankerScoreKeeper:(id)a0;
- (void)addCrossIntentRankerScoreKeeper:(id)a0;
- (void)clearCrossDomainRankerScoreKeeper;
- (void)clearCrossIntentRankerScoreKeeper;
- (id)crossDomainRankerScoreKeeperAtIndex:(unsigned long long)a0;
- (unsigned long long)crossDomainRankerScoreKeeperCount;
- (id)crossIntentRankerScoreKeeperAtIndex:(unsigned long long)a0;
- (unsigned long long)crossIntentRankerScoreKeeperCount;
- (void)deleteCrossDomainRankerScoreKeeper;
- (void)deleteCrossIntentRankerScoreKeeper;

@end
