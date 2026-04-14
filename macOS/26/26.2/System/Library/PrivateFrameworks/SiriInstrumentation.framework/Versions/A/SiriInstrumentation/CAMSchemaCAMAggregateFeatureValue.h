@class NSData;

@interface CAMSchemaCAMAggregateFeatureValue : SISchemaInstrumentationMessage {
    struct { unsigned char mean : 1; unsigned char variance : 1; unsigned char numInteractions : 1; } _has;
}

@property (nonatomic) double mean;
@property (nonatomic) BOOL hasMean;
@property (nonatomic) double variance;
@property (nonatomic) BOOL hasVariance;
@property (nonatomic) unsigned int numInteractions;
@property (nonatomic) BOOL hasNumInteractions;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteMean;
- (void)deleteNumInteractions;
- (void)deleteVariance;

@end
