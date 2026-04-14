@class PBDataReader, GEOPDContactlessPaymentsRibbonItem, GEOPDFactoidRibbonItem, GEOPDAmenityRibbonItem, PBUnknownFields;

@interface GEOPDRibbonItem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAmenityRibbonItem *_amenityRibbonItem;
    GEOPDContactlessPaymentsRibbonItem *_contactlessPaymentsRibbonItem;
    GEOPDFactoidRibbonItem *_factoidRibbonItem;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_amenityRibbonItem : 1; unsigned char read_contactlessPaymentsRibbonItem : 1; unsigned char read_factoidRibbonItem : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)init;
- (id)dictionaryRepresentation;

@end
