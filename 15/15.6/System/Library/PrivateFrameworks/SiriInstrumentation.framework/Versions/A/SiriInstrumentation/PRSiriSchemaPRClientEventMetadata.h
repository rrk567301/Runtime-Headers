@class NSData, SISchemaUUID;

@interface PRSiriSchemaPRClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char postingSpanId : 1; unsigned char spanId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *ifRequestId;
@property (nonatomic) char hasIfRequestId;
@property (nonatomic) unsigned int postingSpanId;
@property (nonatomic) char hasPostingSpanId;
@property (retain, nonatomic) SISchemaUUID *pgId;
@property (nonatomic) char hasPgId;
@property (nonatomic) unsigned long long spanId;
@property (nonatomic) char hasSpanId;
@property (retain, nonatomic) SISchemaUUID *prId;
@property (nonatomic) char hasPrId;
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
- (void)deleteIfRequestId;
- (void)deletePgId;
- (void)deletePostingSpanId;
- (void)deletePrId;
- (void)deleteSpanId;
- (id)suppressMessageUnderConditions;

@end
