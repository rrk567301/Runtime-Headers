@class NSArray, NSData;

@interface ORCHSchemaORCHServerFallbackInitiated : SISchemaInstrumentationMessage {
    struct { unsigned char fallbackReason : 1; } _has;
}

@property (nonatomic) int fallbackReason;
@property (nonatomic) char hasFallbackReason;
@property (copy, nonatomic) NSArray *missingAssets;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addMissingAsset:(int)a0;
- (void)clearMissingAsset;
- (void)deleteFallbackReason;
- (void)deleteMissingAsset;
- (int)missingAssetAtIndex:(unsigned long long)a0;
- (unsigned long long)missingAssetCount;
- (id)suppressMessageUnderConditions;

@end
