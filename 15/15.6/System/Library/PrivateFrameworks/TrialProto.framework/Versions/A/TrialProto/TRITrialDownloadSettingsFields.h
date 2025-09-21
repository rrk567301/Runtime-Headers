@interface TRITrialDownloadSettingsFields : PBCodable <NSCopying> {
    struct { unsigned char discretionaryBehavior : 1; unsigned char allowAnyNetworking : 1; unsigned char allowBattery : 1; } _has;
}

@property (nonatomic) char hasAllowAnyNetworking;
@property (nonatomic) char allowAnyNetworking;
@property (nonatomic) char hasAllowBattery;
@property (nonatomic) char allowBattery;
@property (nonatomic) char hasDiscretionaryBehavior;
@property (nonatomic) int discretionaryBehavior;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDiscretionaryBehavior:(id)a0;
- (id)discretionaryBehaviorAsString:(int)a0;

@end
