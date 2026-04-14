@class NSArray, NSData;

@interface SISchemaUEISiriWasUnavailable : SISchemaInstrumentationMessage {
    struct { unsigned char product : 1; unsigned char reason : 1; unsigned char orchestrationMode : 1; } _has;
}

@property (nonatomic) int product;
@property (nonatomic) BOOL hasProduct;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (copy, nonatomic) NSArray *assetTypes;
@property (copy, nonatomic) NSArray *siriUnavailabilityReasons;
@property (nonatomic) int orchestrationMode;
@property (nonatomic) BOOL hasOrchestrationMode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)deleteReason;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssetType;
- (void)deleteSiriUnavailabilityReasons;
- (void)addAssetType:(int)a0;
- (void)addSiriUnavailabilityReasons:(int)a0;
- (int)assetTypeAtIndex:(unsigned long long)a0;
- (unsigned long long)assetTypeCount;
- (void)clearAssetType;
- (void)clearSiriUnavailabilityReasons;
- (void)deleteOrchestrationMode;
- (void)deleteProduct;
- (int)siriUnavailabilityReasonsAtIndex:(unsigned long long)a0;
- (unsigned long long)siriUnavailabilityReasonsCount;

@end
