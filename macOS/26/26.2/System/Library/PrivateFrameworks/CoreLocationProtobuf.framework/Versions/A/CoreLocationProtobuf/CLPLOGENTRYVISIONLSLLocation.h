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

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
