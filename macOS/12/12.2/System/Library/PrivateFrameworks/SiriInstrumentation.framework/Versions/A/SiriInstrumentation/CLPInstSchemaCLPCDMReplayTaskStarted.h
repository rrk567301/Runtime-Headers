@class NSArray, SISchemaAsset, NSData;

@interface CLPInstSchemaCLPCDMReplayTaskStarted : SISchemaInstrumentationMessage {
    struct { unsigned char replayType : 1; } _has;
}

@property (retain, nonatomic) SISchemaAsset *pluginTaskAsset;
@property (nonatomic) BOOL hasPluginTaskAsset;
@property (copy, nonatomic) NSArray *availableSiriAssets;
@property (nonatomic) int replayType;
@property (nonatomic) BOOL hasReplayType;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addAvailableSiriAssets:(id)a0;
- (void)clearAvailableSiriAssets;
- (unsigned long long)availableSiriAssetsCount;
- (id)availableSiriAssetsAtIndex:(unsigned long long)a0;

@end
