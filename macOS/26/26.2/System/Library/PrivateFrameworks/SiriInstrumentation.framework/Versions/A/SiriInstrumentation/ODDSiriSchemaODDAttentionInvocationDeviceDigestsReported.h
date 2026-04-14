@class NSArray, ODDSiriSchemaODDFixedDimensions, NSData, ODDSiriSchemaODDAttentionInvocationFixedDimensions;

@interface ODDSiriSchemaODDAttentionInvocationDeviceDigestsReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDFixedDimensions *fixedDimensions;
@property (nonatomic) BOOL hasFixedDimensions;
@property (copy, nonatomic) NSArray *digests;
@property (retain, nonatomic) ODDSiriSchemaODDAttentionInvocationFixedDimensions *attentionInvocationFixedDimensions;
@property (nonatomic) BOOL hasAttentionInvocationFixedDimensions;
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
- (id)digestsAtIndex:(unsigned long long)a0;
- (void)addDigests:(id)a0;
- (void)clearDigests;
- (void)deleteAttentionInvocationFixedDimensions;
- (void)deleteDigests;
- (void)deleteFixedDimensions;
- (unsigned long long)digestsCount;

@end
