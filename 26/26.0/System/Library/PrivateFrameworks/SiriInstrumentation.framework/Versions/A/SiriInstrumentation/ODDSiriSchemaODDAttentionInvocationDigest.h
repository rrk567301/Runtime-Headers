@class ODDSiriSchemaODDAttentionInvocationDimensions, ODDSiriSchemaODDAttentionInvocationCounts, NSData;

@interface ODDSiriSchemaODDAttentionInvocationDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDAttentionInvocationDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDAttentionInvocationCounts *counts;
@property (nonatomic) BOOL hasCounts;
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
- (void)deleteCounts;
- (void)deleteDimensions;

@end
