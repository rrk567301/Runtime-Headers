@class CLPLOGENTRYVISIONLSLLocationCoordinate, CLPLOGENTRYVISIONTimeStamp;

@interface CLPLOGENTRYVISIONLSLLocation : PBCodable <NSCopying> {
    struct { unsigned char altitude : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCoordinate;
@property (retain, nonatomic) CLPLOGENTRYVISIONLSLLocationCoordinate *coordinate;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) double altitude;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *timestamp;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
