@class NSMutableArray;

@interface CLPLOGENTRYVISIONLSLMapRoadSegment : PBCodable <NSCopying> {
    struct { unsigned char roadId : 1; } _has;
}

@property (nonatomic) BOOL hasRoadId;
@property (nonatomic) unsigned long long roadId;
@property (retain, nonatomic) NSMutableArray *polylines;

+ (Class)polylinesType;

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
- (void)addPolylines:(id)a0;
- (void)clearPolylines;
- (id)polylinesAtIndex:(unsigned long long)a0;
- (unsigned long long)polylinesCount;

@end
