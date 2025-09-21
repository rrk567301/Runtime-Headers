@class NSArray, NSData;

@interface IFTSchemaASTFlatExprResolveToolVariant : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (copy, nonatomic) NSArray *toolIds;
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
- (id)toolIdsAtIndex:(unsigned long long)a0;
- (void)addToolIds:(id)a0;
- (void)clearToolIds;
- (void)deleteExists;
- (void)deleteToolIds;
- (id)suppressMessageUnderConditions;
- (unsigned long long)toolIdsCount;

@end
