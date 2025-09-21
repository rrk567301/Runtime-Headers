@class NSMutableArray, PBUnknownFields;

@interface GEOPDLabelGeometry : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_labelShapes;
    char _hasSelectionPolygon;
    struct { unsigned char has_hasSelectionPolygon : 1; } _flags;
}

+ (id)labelGeometryWithPlaceData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
