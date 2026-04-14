@class NSString, NSData;

@interface SISchemaABExperimentAssetRetrievalStatusChanged : SISchemaInstrumentationMessage {
    struct { unsigned char retrievalStatusCode : 1; } _has;
}

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) BOOL hasAssetId;
@property (nonatomic) int retrievalStatusCode;
@property (nonatomic) BOOL hasRetrievalStatusCode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssetId;
- (void)deleteExperimentId;
- (void)deleteRetrievalStatusCode;

@end
