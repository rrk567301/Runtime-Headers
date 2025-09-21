@class NSData;

@interface CLPInstSchemaCLPCurareAppIntentSampleClassificationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char probability : 1; } _has;
}

@property (nonatomic) float probability;
@property (nonatomic) char hasProbability;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteProbability;
- (id)suppressMessageUnderConditions;

@end
