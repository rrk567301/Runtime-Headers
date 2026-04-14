@class ODDSiriSchemaODDMultiUserState, ODDSiriSchemaODDHomePodProperties, NSData;

@interface ODDSiriSchemaODDtvOSAssistantProperties : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDMultiUserState *multiUserState;
@property (nonatomic) BOOL hasMultiUserState;
@property (retain, nonatomic) ODDSiriSchemaODDHomePodProperties *homePodProperties;
@property (nonatomic) BOOL hasHomePodProperties;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteHomePodProperties;
- (void)deleteMultiUserState;

@end
