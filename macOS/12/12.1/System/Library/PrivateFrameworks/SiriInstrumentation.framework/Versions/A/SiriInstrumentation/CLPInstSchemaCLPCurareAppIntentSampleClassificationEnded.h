@class NSData;

@interface CLPInstSchemaCLPCurareAppIntentSampleClassificationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char probability : 1; } _has;
}

@property (nonatomic) float probability;
@property (nonatomic) BOOL hasProbability;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
