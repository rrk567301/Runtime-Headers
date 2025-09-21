@class GEOPDQuickLinkParams, GEOPDGroupParams, PBDataReader, PBUnknownFields;

@interface GEOPDButtonItem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDGroupParams *_groupParams;
    GEOPDQuickLinkParams *_quickLinkParams;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _buttonType;
    struct { unsigned char has_buttonType : 1; unsigned char read_unknownFields : 1; unsigned char read_groupParams : 1; unsigned char read_quickLinkParams : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasButtonType;
@property (nonatomic) int buttonType;
@property (readonly, nonatomic) char hasQuickLinkParams;
@property (retain, nonatomic) GEOPDQuickLinkParams *quickLinkParams;
@property (readonly, nonatomic) char hasGroupParams;
@property (retain, nonatomic) GEOPDGroupParams *groupParams;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsButtonType:(id)a0;
- (id)buttonTypeAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
