@interface TRITrialDownloadSettingsFields : PBCodable <NSCopying> {
    struct { unsigned char discretionaryBehavior : 1; unsigned char allowAnyNetworking : 1; unsigned char allowBattery : 1; } _has;
}

@property (nonatomic) BOOL hasAllowAnyNetworking;
@property (nonatomic) BOOL allowAnyNetworking;
@property (nonatomic) BOOL hasAllowBattery;
@property (nonatomic) BOOL allowBattery;
@property (nonatomic) BOOL hasDiscretionaryBehavior;
@property (nonatomic) int discretionaryBehavior;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)discretionaryBehaviorAsString:(int)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsDiscretionaryBehavior:(id)a0;

@end
