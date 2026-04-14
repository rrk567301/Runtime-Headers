@class ODMSiriSchemaODMSiriRequestCounts, ODMSiriSchemaODMDynamicDimensionsAll, NSData;

@interface ODMSiriSchemaODMSiriCountsAll : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODMSiriSchemaODMDynamicDimensionsAll *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODMSiriSchemaODMSiriRequestCounts *requestCounts;
@property (nonatomic) BOOL hasRequestCounts;
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
- (void)deleteRequestCounts;

@end
