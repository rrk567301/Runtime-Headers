@class NSData;

@interface PRSiriSchemaPRRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char originTaskStatementId : 1; } _has;
}

@property (nonatomic) unsigned int originTaskStatementId;
@property (nonatomic) BOOL hasOriginTaskStatementId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteOriginTaskStatementId;
- (id)suppressMessageUnderConditions;

@end
