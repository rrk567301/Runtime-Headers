@class CNVSchemaCNVFlowPluginInputEnded, CNVSchemaCNVFlowPluginInputStarted, SISchemaUUID, NSData;

@interface CNVSchemaCNVFlowPluginInputContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) char hasContextId;
@property (retain, nonatomic) CNVSchemaCNVFlowPluginInputStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) CNVSchemaCNVFlowPluginInputEnded *ended;
@property (nonatomic) char hasEnded;
@property (retain, nonatomic) SISchemaUUID *hypothesisId;
@property (nonatomic) char hasHypothesisId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteContextId;
- (void)deleteEnded;
- (void)deleteHypothesisId;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
