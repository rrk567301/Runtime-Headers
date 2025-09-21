@class PBUnknownFields;

@interface GEOLogMsgStateSummaryLookAroundLog : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _durationSec;
    char _hadMoveActions;
    char _hadPanActions;
    char _hadPoiTapActions;
    char _hadShareActions;
    char _hadZoomActions;
    struct { unsigned char has_durationSec : 1; unsigned char has_hadMoveActions : 1; unsigned char has_hadPanActions : 1; unsigned char has_hadPoiTapActions : 1; unsigned char has_hadShareActions : 1; unsigned char has_hadZoomActions : 1; } _flags;
}

@property (nonatomic) char hasDurationSec;
@property (nonatomic) unsigned int durationSec;
@property (nonatomic) char hasHadPanActions;
@property (nonatomic) char hadPanActions;
@property (nonatomic) char hasHadZoomActions;
@property (nonatomic) char hadZoomActions;
@property (nonatomic) char hasHadMoveActions;
@property (nonatomic) char hadMoveActions;
@property (nonatomic) char hasHadPoiTapActions;
@property (nonatomic) char hadPoiTapActions;
@property (nonatomic) char hasHadShareActions;
@property (nonatomic) char hadShareActions;
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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
