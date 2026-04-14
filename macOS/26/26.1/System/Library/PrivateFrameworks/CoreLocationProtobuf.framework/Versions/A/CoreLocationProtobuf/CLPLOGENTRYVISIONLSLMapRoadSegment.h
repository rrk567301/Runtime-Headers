@class NSMutableArray;

@interface CLPLOGENTRYVISIONLSLMapRoadSegment : PBCodable <NSCopying> {
    struct { unsigned char roadId : 1; } _has;
}

@property (nonatomic) BOOL hasRoadId;
@property (nonatomic) unsigned long long roadId;
@property (retain, nonatomic) NSMutableArray *polylines;

+ (Class)polylinesType;

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
- (void)addPolylines:(id)a0;
- (void)clearPolylines;
- (id)polylinesAtIndex:(unsigned long long)a0;
- (unsigned long long)polylinesCount;

@end
