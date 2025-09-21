@class GEOLocation, PBUnknownFields;

@interface GEOLogMsgStateLookAroundView : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOLocation *_location;
    double _zoomLevel;
    unsigned int _heading;
    unsigned int _numberPoisInView;
    char _isLabelingShown;
    struct { unsigned char has_zoomLevel : 1; unsigned char has_heading : 1; unsigned char has_numberPoisInView : 1; unsigned char has_isLabelingShown : 1; } _flags;
}

@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) char hasHeading;
@property (nonatomic) unsigned int heading;
@property (nonatomic) char hasZoomLevel;
@property (nonatomic) double zoomLevel;
@property (nonatomic) char hasNumberPoisInView;
@property (nonatomic) unsigned int numberPoisInView;
@property (nonatomic) char hasIsLabelingShown;
@property (nonatomic) char isLabelingShown;
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
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
