@class ODMSiriSchemaODMSiriRequestCounts, ODMSiriSchemaODMDynamicDimensionsAll, NSData;

@interface ODMSiriSchemaODMSiriCountsAll : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODMSiriSchemaODMDynamicDimensionsAll *dimensions;
@property (nonatomic) char hasDimensions;
@property (retain, nonatomic) ODMSiriSchemaODMSiriRequestCounts *requestCounts;
@property (nonatomic) char hasRequestCounts;
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
- (void)deleteRequestCounts;
- (id)suppressMessageUnderConditions;

@end
