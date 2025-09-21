@class PBDataReader, GEOPDSImplicitQuerySearchForEVCharger, GEOPDSImplicitQuerySearchAroundPOI, GEOPDSImplicitQueryIntroTipForHiking, PBUnknownFields;

@interface GEOPDSImplicitQueryCategoryFilter : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDSImplicitQueryIntroTipForHiking *_implicitQueryIntroTipForHiking;
    GEOPDSImplicitQuerySearchAroundPOI *_implicitQuerySearchAroundPoi;
    GEOPDSImplicitQuerySearchForEVCharger *_implicitQuerySearchForEvcharger;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _implicitQueryType;
    struct { unsigned char has_implicitQueryType : 1; unsigned char read_unknownFields : 1; unsigned char read_implicitQueryIntroTipForHiking : 1; unsigned char read_implicitQuerySearchAroundPoi : 1; unsigned char read_implicitQuerySearchForEvcharger : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
