@class PCPLocation;

@interface PCPLocationHistory : PBCodable <NSCopying> {
    struct { unsigned char timeCFAbsolute : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) PCPLocation *location;
@property (nonatomic) BOOL hasTimeCFAbsolute;
@property (nonatomic) double timeCFAbsolute;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
