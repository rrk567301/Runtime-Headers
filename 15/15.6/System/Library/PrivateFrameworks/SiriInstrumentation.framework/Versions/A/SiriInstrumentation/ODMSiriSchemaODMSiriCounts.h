@class ODMSiriSchemaODMSiriTaskCounts, ODMSiriSchemaODMDynamicDimensions, NSData;

@interface ODMSiriSchemaODMSiriCounts : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODMSiriSchemaODMDynamicDimensions *dimensions;
@property (nonatomic) char hasDimensions;
@property (retain, nonatomic) ODMSiriSchemaODMSiriTaskCounts *taskCounts;
@property (nonatomic) char hasTaskCounts;
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
- (void)deleteDimensions;
- (void)deleteTaskCounts;
- (id)suppressMessageUnderConditions;

@end
