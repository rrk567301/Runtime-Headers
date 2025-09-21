@class NSArray, NSData, ODDSiriSchemaODDFixedDimensions;

@interface ODDSiriSchemaODDAssistantDeviceDigestsReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDFixedDimensions *fixedDimensions;
@property (nonatomic) char hasFixedDimensions;
@property (copy, nonatomic) NSArray *digests;
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
- (id)digestsAtIndex:(unsigned long long)a0;
- (void)addDigests:(id)a0;
- (void)clearDigests;
- (void)deleteDigests;
- (void)deleteFixedDimensions;
- (unsigned long long)digestsCount;
- (id)suppressMessageUnderConditions;

@end
