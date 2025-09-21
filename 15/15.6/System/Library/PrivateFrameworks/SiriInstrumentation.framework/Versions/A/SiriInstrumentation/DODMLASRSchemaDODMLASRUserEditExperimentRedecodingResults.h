@class NSString, NSArray, NSData, SISchemaUUID;

@interface DODMLASRSchemaDODMLASRUserEditExperimentRedecodingResults : SISchemaInstrumentationMessage {
    struct { unsigned char errorCode : 1; } _has;
}

@property (copy, nonatomic) NSString *datapackVersion;
@property (nonatomic) char hasDatapackVersion;
@property (copy, nonatomic) NSArray *confusionPairs;
@property (retain, nonatomic) SISchemaUUID *asrId;
@property (nonatomic) char hasAsrId;
@property (nonatomic) int errorCode;
@property (nonatomic) char hasErrorCode;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addConfusionPairs:(id)a0;
- (void)clearConfusionPairs;
- (id)confusionPairsAtIndex:(unsigned long long)a0;
- (unsigned long long)confusionPairsCount;
- (void)deleteAsrId;
- (void)deleteConfusionPairs;
- (void)deleteDatapackVersion;
- (void)deleteLinkId;
- (id)suppressMessageUnderConditions;

@end
