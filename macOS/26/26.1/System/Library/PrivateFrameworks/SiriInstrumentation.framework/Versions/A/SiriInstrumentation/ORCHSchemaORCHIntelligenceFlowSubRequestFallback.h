@class NSData, SISchemaUUID;

@interface ORCHSchemaORCHIntelligenceFlowSubRequestFallback : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originSubRequestId;
@property (nonatomic) BOOL hasOriginSubRequestId;
@property (retain, nonatomic) SISchemaUUID *fallbackSubRequestId;
@property (nonatomic) BOOL hasFallbackSubRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteFallbackSubRequestId;
- (void)deleteOriginSubRequestId;

@end
