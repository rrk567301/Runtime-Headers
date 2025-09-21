@class PBDataReader, GEOPDRefinementSessionState, GEOPDResultRefinementBar, GEOPDResultRefinementView, PBUnknownFields;

@interface GEOPDResultRefinementGroup : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDRefinementSessionState *_refinementSessionState;
    GEOPDResultRefinementBar *_resultRefinementBar;
    GEOPDResultRefinementView *_resultRefinementView;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_refinementSessionState : 1; unsigned char read_resultRefinementBar : 1; unsigned char read_resultRefinementView : 1; unsigned char wrote_anyField : 1; } _flags;
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
