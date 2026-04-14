@class ASRSchemaASRContextualEntityRetrievalEnded, ASRSchemaASRContextualEntityRetrievalStarted, NSData;

@interface ASRSchemaASRContextualEntityRetrievalContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ASRSchemaASRContextualEntityRetrievalStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) ASRSchemaASRContextualEntityRetrievalEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteEnded;
- (void)deleteStartedOrChanged;

@end
