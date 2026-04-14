@class NSArray, NSData;

@interface IFTSchemaIFTResolveToolExpression : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *toolIds;
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
- (id)toolIdsAtIndex:(unsigned long long)a0;
- (void)addToolIds:(id)a0;
- (void)clearToolIds;
- (void)deleteToolIds;
- (unsigned long long)toolIdsCount;

@end
