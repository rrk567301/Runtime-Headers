@class NSData, SISchemaUUID;

@interface PRSiriSchemaPRClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char postingSpanId : 1; unsigned char spanId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *ifRequestId;
@property (nonatomic) BOOL hasIfRequestId;
@property (nonatomic) unsigned int postingSpanId;
@property (nonatomic) BOOL hasPostingSpanId;
@property (retain, nonatomic) SISchemaUUID *pgId;
@property (nonatomic) BOOL hasPgId;
@property (nonatomic) unsigned long long spanId;
@property (nonatomic) BOOL hasSpanId;
@property (retain, nonatomic) SISchemaUUID *prId;
@property (nonatomic) BOOL hasPrId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteIfRequestId;
- (void)deletePgId;
- (void)deletePostingSpanId;
- (void)deletePrId;
- (void)deleteSpanId;

@end
