@interface SGM2HarvestCost : PBCodable <NSCopying> {
    struct { unsigned char documentSource : 1; unsigned char harvestSource : 1; unsigned char harvestedOnBattery : 1; unsigned char highPriority : 1; unsigned char receivedOnBattery : 1; } _has;
}

@property (nonatomic) char hasDocumentSource;
@property (nonatomic) int documentSource;
@property (nonatomic) char hasHighPriority;
@property (nonatomic) char highPriority;
@property (nonatomic) char hasReceivedOnBattery;
@property (nonatomic) char receivedOnBattery;
@property (nonatomic) char hasHarvestedOnBattery;
@property (nonatomic) char harvestedOnBattery;
@property (nonatomic) char hasHarvestSource;
@property (nonatomic) int harvestSource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDocumentSource:(id)a0;
- (int)StringAsHarvestSource:(id)a0;
- (id)documentSourceAsString:(int)a0;
- (id)harvestSourceAsString:(int)a0;

@end
