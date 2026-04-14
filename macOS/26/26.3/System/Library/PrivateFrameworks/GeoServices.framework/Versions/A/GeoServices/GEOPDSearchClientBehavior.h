@class PBUnknownFields;

@interface GEOPDSearchClientBehavior : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _shouldAllowManualRedoButton;
    BOOL _shouldEnableRedoSearch;
    struct { unsigned char has_shouldAllowManualRedoButton : 1; unsigned char has_shouldEnableRedoSearch : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
