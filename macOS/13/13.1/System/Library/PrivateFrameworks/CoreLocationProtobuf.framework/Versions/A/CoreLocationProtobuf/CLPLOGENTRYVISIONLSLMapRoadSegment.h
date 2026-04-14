@class NSMutableArray;

@interface CLPLOGENTRYVISIONLSLMapRoadSegment : PBCodable <NSCopying> {
    struct { unsigned char roadId : 1; } _has;
}

@property (nonatomic) BOOL hasRoadId;
@property (nonatomic) unsigned long long roadId;
@property (retain, nonatomic) NSMutableArray *polylines;

+ (Class)polylinesType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearPolylines;
- (void)addPolylines:(id)a0;
- (unsigned long long)polylinesCount;
- (id)polylinesAtIndex:(unsigned long long)a0;

@end
