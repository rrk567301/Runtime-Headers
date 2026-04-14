@class NSData, SISchemaUUID;

@interface ORCHSchemaORCHIntelligenceFlowSubRequestFallback : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originSubRequestId;
@property (nonatomic) BOOL hasOriginSubRequestId;
@property (retain, nonatomic) SISchemaUUID *fallbackSubRequestId;
@property (nonatomic) BOOL hasFallbackSubRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteFallbackSubRequestId;
- (void)deleteOriginSubRequestId;

@end
