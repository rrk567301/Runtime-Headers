@class NSData, ORCHSchemaORCHNLRouterDecisionGenAIMetadata, SISchemaUUID;

@interface ORCHSchemaORCHSubRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char subRequestType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
@property (nonatomic) int subRequestType;
@property (nonatomic) BOOL hasSubRequestType;
@property (retain, nonatomic) ORCHSchemaORCHNLRouterDecisionGenAIMetadata *genAIMetadata;
@property (nonatomic) BOOL hasGenAIMetadata;
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
- (void)deleteGenAIMetadata;
- (void)deleteSubRequestType;
- (void)deleteTrpId;

@end
