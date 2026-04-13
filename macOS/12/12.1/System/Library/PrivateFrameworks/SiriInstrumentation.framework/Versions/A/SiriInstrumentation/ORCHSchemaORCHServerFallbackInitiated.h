@class NSArray, NSData;

@interface ORCHSchemaORCHServerFallbackInitiated : SISchemaInstrumentationMessage {
    struct { unsigned char fallbackReason : 1; } _has;
}

@property (nonatomic) int fallbackReason;
@property (nonatomic) BOOL hasFallbackReason;
@property (copy, nonatomic) NSArray *missingAssets;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addMissingAsset:(int)a0;
- (void)clearMissingAsset;
- (unsigned long long)missingAssetCount;
- (int)missingAssetAtIndex:(unsigned long long)a0;

@end
