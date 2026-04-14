@class NSArray, NSData, ODDSiriSchemaODDFixedDimensions;

@interface ODDSiriSchemaODDAssetSetStatusDigestReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDFixedDimensions *fixedDimensions;
@property (nonatomic) BOOL hasFixedDimensions;
@property (copy, nonatomic) NSArray *digests;
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
- (id)digestsAtIndex:(unsigned long long)a0;
- (void)addDigests:(id)a0;
- (void)clearDigests;
- (void)deleteDigests;
- (void)deleteFixedDimensions;
- (unsigned long long)digestsCount;

@end
