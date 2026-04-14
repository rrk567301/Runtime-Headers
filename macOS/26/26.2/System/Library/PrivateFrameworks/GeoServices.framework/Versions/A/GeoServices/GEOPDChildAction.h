@class GEOPDChildActionGuides, GEOPDChildActionDirections, PBDataReader, PBUnknownFields, GEOPDChildActionSearch, GEOPDChildActionDownloadOfflineMap, GEOPDChildActionFlyover, GEOPDChildActionChat;

@interface GEOPDChildAction : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDChildActionChat *_childActionChat;
    GEOPDChildActionDirections *_childActionDirections;
    GEOPDChildActionDownloadOfflineMap *_childActionDownloadOfflineMap;
    GEOPDChildActionFlyover *_childActionFlyover;
    GEOPDChildActionGuides *_childActionGuides;
    GEOPDChildActionSearch *_childActionSearch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _childActionType;
    struct { unsigned char has_childActionType : 1; unsigned char read_unknownFields : 1; unsigned char read_childActionChat : 1; unsigned char read_childActionDirections : 1; unsigned char read_childActionDownloadOfflineMap : 1; unsigned char read_childActionFlyover : 1; unsigned char read_childActionGuides : 1; unsigned char read_childActionSearch : 1; unsigned char wrote_anyField : 1; } _flags;
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
