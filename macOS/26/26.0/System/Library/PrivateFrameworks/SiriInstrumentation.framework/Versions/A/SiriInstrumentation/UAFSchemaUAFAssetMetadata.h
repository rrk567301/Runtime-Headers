@class NSString, NSData;

@interface UAFSchemaUAFAssetMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char assetSizeInBytes : 1; } _has;
}

@property (copy, nonatomic) NSString *assetName;
@property (nonatomic) BOOL hasAssetName;
@property (nonatomic) unsigned long long assetSizeInBytes;
@property (nonatomic) BOOL hasAssetSizeInBytes;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAssetName;
- (void)deleteAssetSizeInBytes;

@end
