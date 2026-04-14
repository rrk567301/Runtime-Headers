@class NSData, SISchemaUUID;

@interface NLRouterSchemaNLRouterInvalidDecisionEmitted : SISchemaInstrumentationMessage {
    struct { unsigned char isSuppressed : 1; unsigned char nlRouterInvalidDecisionReason : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *traceId;
@property (nonatomic) BOOL hasTraceId;
@property (nonatomic) BOOL isSuppressed;
@property (nonatomic) BOOL hasIsSuppressed;
@property (nonatomic) int nlRouterInvalidDecisionReason;
@property (nonatomic) BOOL hasNlRouterInvalidDecisionReason;
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
- (void)deleteIsSuppressed;
- (void)deleteNlRouterInvalidDecisionReason;
- (void)deleteTraceId;

@end
