@class NSData, ODDSiriSchemaODDDictationDimensions, ODDSiriSchemaODDDictationCounts;

@interface ODDSiriSchemaODDDictationDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDDictationDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDDictationCounts *counts;
@property (nonatomic) BOOL hasCounts;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCounts;
- (void)deleteDimensions;
- (id)suppressMessageUnderConditions;

@end
