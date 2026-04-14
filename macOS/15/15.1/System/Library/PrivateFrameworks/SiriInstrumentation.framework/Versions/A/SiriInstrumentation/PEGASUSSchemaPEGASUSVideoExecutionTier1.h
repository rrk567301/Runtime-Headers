@class NSArray, NSString, NSData;

@interface PEGASUSSchemaPEGASUSVideoExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *resultEntityIds;
@property (copy, nonatomic) NSString *videoTitle;
@property (nonatomic) BOOL hasVideoTitle;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addResultEntityIds:(id)a0;
- (void)clearResultEntityIds;
- (void)deleteResultEntityIds;
- (void)deleteVideoTitle;
- (id)resultEntityIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)resultEntityIdsCount;
- (id)suppressMessageUnderConditions;

@end
