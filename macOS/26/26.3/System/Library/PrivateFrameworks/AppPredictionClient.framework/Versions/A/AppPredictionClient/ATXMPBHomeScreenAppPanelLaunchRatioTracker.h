@interface ATXMPBHomeScreenAppPanelLaunchRatioTracker : PBCodable <NSCopying> {
    struct { unsigned char location : 1; unsigned char ratioType : 1; } _has;
}

@property (nonatomic) BOOL hasLocation;
@property (nonatomic) int location;
@property (nonatomic) BOOL hasRatioType;
@property (nonatomic) int ratioType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsRatioType:(id)a0;
- (int)StringAsLocation:(id)a0;
- (id)locationAsString:(int)a0;
- (id)ratioTypeAsString:(int)a0;

@end
