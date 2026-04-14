@class ODDSiriSchemaODDAttentionInvocationDimensions, ODDSiriSchemaODDAttentionInvocationCounts, NSData;

@interface ODDSiriSchemaODDAttentionInvocationDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDAttentionInvocationDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDAttentionInvocationCounts *counts;
@property (nonatomic) BOOL hasCounts;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCounts;
- (void)deleteDimensions;

@end
