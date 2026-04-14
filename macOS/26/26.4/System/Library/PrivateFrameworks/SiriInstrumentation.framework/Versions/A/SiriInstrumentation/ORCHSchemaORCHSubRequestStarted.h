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
- (void)deleteGenAIMetadata;
- (void)deleteSubRequestType;
- (void)deleteTrpId;

@end
