@interface ATXMPBHomeScreenAppPanelLaunchRatioTracker : PBCodable <NSCopying> {
    struct { unsigned char location : 1; unsigned char ratioType : 1; } _has;
}

@property (nonatomic) char hasLocation;
@property (nonatomic) int location;
@property (nonatomic) char hasRatioType;
@property (nonatomic) int ratioType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsRatioType:(id)a0;
- (int)StringAsLocation:(id)a0;
- (id)locationAsString:(int)a0;
- (id)ratioTypeAsString:(int)a0;

@end
