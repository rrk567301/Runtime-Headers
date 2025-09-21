@class ODDSiriSchemaODDDictationDimensions, NSArray, NSData, ODDSiriSchemaODDDictationCounts;

@interface ODDSiriSchemaODDDictationDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDDictationDimensions *dimensions;
@property (nonatomic) char hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDDictationCounts *counts;
@property (nonatomic) char hasCounts;
@property (copy, nonatomic) NSArray *turnIds;
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
- (id)turnIdsAtIndex:(unsigned long long)a0;
- (void)addTurnIds:(id)a0;
- (void)clearTurnIds;
- (void)deleteCounts;
- (void)deleteDimensions;
- (void)deleteTurnIds;
- (id)suppressMessageUnderConditions;
- (unsigned long long)turnIdsCount;

@end
