@class NSData, SISchemaUUID;

@interface PGSchemaPGClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char postingSpanId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *ifRequestId;
@property (nonatomic) char hasIfRequestId;
@property (nonatomic) unsigned long long postingSpanId;
@property (nonatomic) char hasPostingSpanId;
@property (retain, nonatomic) SISchemaUUID *planCycleId;
@property (nonatomic) char hasPlanCycleId;
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
- (void)deletePlanCycleId;
- (void)deletePostingSpanId;
- (id)suppressMessageUnderConditions;

@end
