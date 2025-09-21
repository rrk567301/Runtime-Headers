@class PBDataReader, GEOPDAppClipParams, GEOPDExtensionParams, GEOPDWebLinkParams, GEOPDQuickLinkActionDataParams, PBUnknownFields;

@interface GEOPDLink : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAppClipParams *_appClipParams;
    GEOPDExtensionParams *_extensionParams;
    GEOPDQuickLinkActionDataParams *_quickLinkParams;
    GEOPDWebLinkParams *_webLinkParams;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _linkType;
    unsigned int _ownerProvidedRank;
    struct { unsigned char has_linkType : 1; unsigned char has_ownerProvidedRank : 1; unsigned char read_unknownFields : 1; unsigned char read_appClipParams : 1; unsigned char read_extensionParams : 1; unsigned char read_quickLinkParams : 1; unsigned char read_webLinkParams : 1; unsigned char wrote_anyField : 1; } _flags;
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
