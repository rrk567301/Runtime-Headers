@class NSData, SISchemaUUID;

@interface ORCHSchemaORCHIntelligenceFlowSubRequestFallback : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originSubRequestId;
@property (nonatomic) BOOL hasOriginSubRequestId;
@property (retain, nonatomic) SISchemaUUID *fallbackSubRequestId;
@property (nonatomic) BOOL hasFallbackSubRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFallbackSubRequestId;
- (void)deleteOriginSubRequestId;

@end
