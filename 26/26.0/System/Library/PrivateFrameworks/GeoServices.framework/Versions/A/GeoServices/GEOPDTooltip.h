@class PBDataReader, GEOPDPhoto, GEOLocalizedString, PBUnknownFields;

@interface GEOPDTooltip : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLocalizedString *_actionLink;
    GEOPDPhoto *_photo;
    GEOLocalizedString *_subtitle;
    GEOLocalizedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _customRouteType;
    int _toolTipType;
    struct { unsigned char has_customRouteType : 1; unsigned char has_toolTipType : 1; unsigned char read_unknownFields : 1; unsigned char read_actionLink : 1; unsigned char read_photo : 1; unsigned char read_subtitle : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)tooltipFromPlaceData:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
