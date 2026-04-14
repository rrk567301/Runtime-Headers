@class NSMutableArray, PBUnknownFields;

@interface GEOPDTemplatePlace : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_templateDatas;
    unsigned int _numInlineItems;
    struct { unsigned char has_numInlineItems : 1; } _flags;
}

+ (id)templatedPlacesForPlaceData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
