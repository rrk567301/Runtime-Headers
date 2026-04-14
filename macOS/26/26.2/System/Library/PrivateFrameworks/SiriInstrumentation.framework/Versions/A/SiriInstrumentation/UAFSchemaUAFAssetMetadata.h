@class NSString, NSData;

@interface UAFSchemaUAFAssetMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char assetSizeInBytes : 1; } _has;
}

@property (copy, nonatomic) NSString *assetName;
@property (nonatomic) BOOL hasAssetName;
@property (nonatomic) unsigned long long assetSizeInBytes;
@property (nonatomic) BOOL hasAssetSizeInBytes;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteAssetName;
- (void)deleteAssetSizeInBytes;

@end
