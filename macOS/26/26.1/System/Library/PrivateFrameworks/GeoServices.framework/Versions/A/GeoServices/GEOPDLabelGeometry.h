@class NSMutableArray, PBUnknownFields;

@interface GEOPDLabelGeometry : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_labelShapes;
    BOOL _hasSelectionPolygon;
    struct { unsigned char has_hasSelectionPolygon : 1; } _flags;
}

+ (id)labelGeometryWithPlaceData:(id)a0;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
