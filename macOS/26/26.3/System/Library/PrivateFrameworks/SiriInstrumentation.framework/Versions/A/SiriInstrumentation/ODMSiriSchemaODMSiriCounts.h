@class ODMSiriSchemaODMSiriTaskCounts, ODMSiriSchemaODMDynamicDimensions, NSData;

@interface ODMSiriSchemaODMSiriCounts : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODMSiriSchemaODMDynamicDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODMSiriSchemaODMSiriTaskCounts *taskCounts;
@property (nonatomic) BOOL hasTaskCounts;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteDimensions;
- (void)deleteTaskCounts;

@end
