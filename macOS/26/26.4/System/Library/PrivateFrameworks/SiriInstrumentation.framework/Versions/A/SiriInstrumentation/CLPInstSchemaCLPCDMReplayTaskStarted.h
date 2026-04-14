@class NSArray, SISchemaAsset, NSData;

@interface CLPInstSchemaCLPCDMReplayTaskStarted : SISchemaInstrumentationMessage {
    struct { unsigned char replayType : 1; } _has;
}

@property (retain, nonatomic) SISchemaAsset *pluginTaskAsset;
@property (nonatomic) BOOL hasPluginTaskAsset;
@property (copy, nonatomic) NSArray *availableSiriAssets;
@property (nonatomic) int replayType;
@property (nonatomic) BOOL hasReplayType;
@property (copy, nonatomic) NSArray *habitualUsages;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addAvailableSiriAssets:(id)a0;
- (void)addHabitualUsage:(id)a0;
- (id)availableSiriAssetsAtIndex:(unsigned long long)a0;
- (unsigned long long)availableSiriAssetsCount;
- (void)clearAvailableSiriAssets;
- (void)clearHabitualUsage;
- (void)deleteAvailableSiriAssets;
- (void)deleteHabitualUsage;
- (void)deletePluginTaskAsset;
- (void)deleteReplayType;
- (id)habitualUsageAtIndex:(unsigned long long)a0;
- (unsigned long long)habitualUsageCount;

@end
