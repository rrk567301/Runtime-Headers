@class NSData;

@interface PETSchemaPETDistribution : SISchemaInstrumentationMessage {
    struct { unsigned char min : 1; unsigned char max : 1; unsigned char mean : 1; unsigned char variance : 1; } _has;
}

@property (nonatomic) double min;
@property (nonatomic) char hasMin;
@property (nonatomic) double max;
@property (nonatomic) char hasMax;
@property (nonatomic) double mean;
@property (nonatomic) char hasMean;
@property (nonatomic) double variance;
@property (nonatomic) char hasVariance;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMax;
- (void)deleteMean;
- (void)deleteMin;
- (void)deleteVariance;
- (id)suppressMessageUnderConditions;

@end
