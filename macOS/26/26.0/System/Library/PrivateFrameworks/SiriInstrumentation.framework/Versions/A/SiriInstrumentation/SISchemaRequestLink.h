@class NSData, SISchemaRequestLinkInfo;

@interface SISchemaRequestLink : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaRequestLinkInfo *source;
@property (nonatomic) BOOL hasSource;
@property (retain, nonatomic) SISchemaRequestLinkInfo *target;
@property (nonatomic) BOOL hasTarget;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteSource;
- (void)deleteTarget;

@end
