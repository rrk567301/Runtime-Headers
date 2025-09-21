@class NSString, PBUnknownFields;

@interface GEOVLFUsageTileID : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_buildId;
    double _uncertainty;
    double _xCoordinate;
    double _yCoordinate;
    struct { unsigned char has_uncertainty : 1; unsigned char has_xCoordinate : 1; unsigned char has_yCoordinate : 1; } _flags;
}

@property (readonly, nonatomic) char hasBuildId;
@property (retain, nonatomic) NSString *buildId;
@property (nonatomic) char hasXCoordinate;
@property (nonatomic) double xCoordinate;
@property (nonatomic) char hasYCoordinate;
@property (nonatomic) double yCoordinate;
@property (nonatomic) char hasUncertainty;
@property (nonatomic) double uncertainty;
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
