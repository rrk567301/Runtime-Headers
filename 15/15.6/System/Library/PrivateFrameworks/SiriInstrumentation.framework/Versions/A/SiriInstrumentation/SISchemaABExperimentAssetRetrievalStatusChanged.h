@class NSString, NSData;

@interface SISchemaABExperimentAssetRetrievalStatusChanged : SISchemaInstrumentationMessage {
    struct { unsigned char retrievalStatusCode : 1; } _has;
}

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) char hasExperimentId;
@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) char hasAssetId;
@property (nonatomic) int retrievalStatusCode;
@property (nonatomic) char hasRetrievalStatusCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssetId;
- (void)deleteExperimentId;
- (void)deleteRetrievalStatusCode;
- (id)suppressMessageUnderConditions;

@end
