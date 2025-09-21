@class NSData, SISchemaAsset;

@interface CLPInstSchemaCLPCurareAppIntentTaskClassificationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char classifierModelType : 1; } _has;
}

@property (nonatomic) int classifierModelType;
@property (nonatomic) char hasClassifierModelType;
@property (retain, nonatomic) SISchemaAsset *classifierModelAsset;
@property (nonatomic) char hasClassifierModelAsset;
@property (retain, nonatomic) SISchemaAsset *nlv4AssetVersion;
@property (nonatomic) char hasNlv4AssetVersion;
@property (retain, nonatomic) SISchemaAsset *nlv4AssetVersionOverride;
@property (nonatomic) char hasNlv4AssetVersionOverride;
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
- (void)deleteClassifierModelAsset;
- (void)deleteClassifierModelType;
- (void)deleteNlv4AssetVersion;
- (void)deleteNlv4AssetVersionOverride;
- (id)suppressMessageUnderConditions;

@end
