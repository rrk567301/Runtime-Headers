@class ODDSiriSchemaODDMultiUserState, ODDSiriSchemaODDHomePodProperties, NSData;

@interface ODDSiriSchemaODDtvOSAssistantProperties : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDMultiUserState *multiUserState;
@property (nonatomic) char hasMultiUserState;
@property (retain, nonatomic) ODDSiriSchemaODDHomePodProperties *homePodProperties;
@property (nonatomic) char hasHomePodProperties;
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
- (void)deleteHomePodProperties;
- (void)deleteMultiUserState;
- (id)suppressMessageUnderConditions;

@end
