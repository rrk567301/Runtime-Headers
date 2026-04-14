@class NSArray, ODDSiriSchemaODDAssistantCounts, NSData, ODDSiriSchemaODDAssistantDimensions;

@interface ODDSiriSchemaODDAssistantDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDAssistantDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDAssistantCounts *counts;
@property (nonatomic) BOOL hasCounts;
@property (copy, nonatomic) NSArray *turnIds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)turnIdsAtIndex:(unsigned long long)a0;
- (void)addTurnIds:(id)a0;
- (void)clearTurnIds;
- (void)deleteCounts;
- (void)deleteDimensions;
- (void)deleteTurnIds;
- (unsigned long long)turnIdsCount;

@end
