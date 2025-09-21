@class NSData, ORCHSchemaORCHNLRouterDecisionGenAIMetadata, SISchemaUUID;

@interface ORCHSchemaORCHSubRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char subRequestType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) char hasTrpId;
@property (nonatomic) int subRequestType;
@property (nonatomic) char hasSubRequestType;
@property (retain, nonatomic) ORCHSchemaORCHNLRouterDecisionGenAIMetadata *genAIMetadata;
@property (nonatomic) char hasGenAIMetadata;
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
- (void)deleteGenAIMetadata;
- (void)deleteSubRequestType;
- (void)deleteTrpId;
- (id)suppressMessageUnderConditions;

@end
