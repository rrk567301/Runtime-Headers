@class NSData;

@interface CAMSchemaCAMAggregateFeatureValue : SISchemaInstrumentationMessage {
    struct { unsigned char mean : 1; unsigned char variance : 1; unsigned char numInteractions : 1; } _has;
}

@property (nonatomic) double mean;
@property (nonatomic) char hasMean;
@property (nonatomic) double variance;
@property (nonatomic) char hasVariance;
@property (nonatomic) unsigned int numInteractions;
@property (nonatomic) char hasNumInteractions;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMean;
- (void)deleteNumInteractions;
- (void)deleteVariance;
- (id)suppressMessageUnderConditions;

@end
