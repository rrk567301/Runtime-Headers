@class CLPLOGENTRYVISIONLSLLocationCoordinate, CLPLOGENTRYVISIONTimeStamp;

@interface CLPLOGENTRYVISIONLSLLocation : PBCodable <NSCopying> {
    struct { unsigned char altitude : 1; } _has;
}

@property (readonly, nonatomic) char hasCoordinate;
@property (retain, nonatomic) CLPLOGENTRYVISIONLSLLocationCoordinate *coordinate;
@property (nonatomic) char hasAltitude;
@property (nonatomic) double altitude;
@property (readonly, nonatomic) char hasTimestamp;
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *timestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
