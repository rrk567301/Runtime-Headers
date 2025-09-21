@class NSData, ORCHSchemaORCHNLClassicDeprecationFlags, SISchemaUUID;

@interface ORCHSchemaORCHRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char requestType : 1; unsigned char siriUODEnabled : 1; unsigned char siriUODMode : 1; unsigned char siriAsrMode : 1; unsigned char siriNlMode : 1; unsigned char isAssistantEngineRequest : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *orchestratorSessionId;
@property (nonatomic) char hasOrchestratorSessionId;
@property (nonatomic) int requestType;
@property (nonatomic) char hasRequestType;
@property (nonatomic) char siriUODEnabled;
@property (nonatomic) char hasSiriUODEnabled;
@property (nonatomic) int siriUODMode;
@property (nonatomic) char hasSiriUODMode;
@property (nonatomic) int siriAsrMode;
@property (nonatomic) char hasSiriAsrMode;
@property (nonatomic) int siriNlMode;
@property (nonatomic) char hasSiriNlMode;
@property (retain, nonatomic) ORCHSchemaORCHNLClassicDeprecationFlags *nlv3DeprecationFlags;
@property (nonatomic) char hasNlv3DeprecationFlags;
@property (nonatomic) char isAssistantEngineRequest;
@property (nonatomic) char hasIsAssistantEngineRequest;
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
- (void)deleteIsAssistantEngineRequest;
- (void)deleteNlv3DeprecationFlags;
- (void)deleteOrchestratorSessionId;
- (void)deleteRequestType;
- (void)deleteSiriAsrMode;
- (void)deleteSiriNlMode;
- (void)deleteSiriUODEnabled;
- (void)deleteSiriUODMode;
- (id)suppressMessageUnderConditions;

@end
