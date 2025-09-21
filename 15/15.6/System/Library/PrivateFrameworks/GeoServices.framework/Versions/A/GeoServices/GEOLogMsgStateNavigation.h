@class PBUnknownFields, GEONavCameraState;

@interface GEOLogMsgStateNavigation : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _distanceToDestination;
    GEONavCameraState *_navCameraState;
    int _lineType;
    int _navState;
    struct { unsigned char has_distanceToDestination : 1; unsigned char has_lineType : 1; unsigned char has_navState : 1; } _flags;
}

@property (nonatomic) char hasLineType;
@property (nonatomic) int lineType;
@property (nonatomic) char hasNavState;
@property (nonatomic) int navState;
@property (nonatomic) char hasDistanceToDestination;
@property (nonatomic) double distanceToDestination;
@property (readonly, nonatomic) char hasNavCameraState;
@property (retain, nonatomic) GEONavCameraState *navCameraState;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsLineType:(id)a0;
- (int)StringAsNavState:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)lineTypeAsString:(int)a0;
- (id)navStateAsString:(int)a0;
- (void)readAll:(char)a0;

@end
