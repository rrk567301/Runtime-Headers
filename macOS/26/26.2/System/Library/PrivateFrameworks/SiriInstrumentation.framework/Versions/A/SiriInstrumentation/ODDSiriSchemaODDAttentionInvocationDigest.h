@class ODDSiriSchemaODDAttentionInvocationDimensions, ODDSiriSchemaODDAttentionInvocationCounts, NSData;

@interface ODDSiriSchemaODDAttentionInvocationDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDAttentionInvocationDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDAttentionInvocationCounts *counts;
@property (nonatomic) BOOL hasCounts;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteCounts;
- (void)deleteDimensions;

@end
