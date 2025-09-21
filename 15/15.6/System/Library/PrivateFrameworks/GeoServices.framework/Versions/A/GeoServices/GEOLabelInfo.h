@class GEOPBTransitArtwork, PBUnknownFields, PBDataReader, GEOFormattedString, GEOStyleAttributes;

@interface GEOLabelInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_detail;
    GEOPBTransitArtwork *_iconArtwork;
    GEOStyleAttributes *_labelStyleAttributes;
    GEOFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_detail : 1; unsigned char read_iconArtwork : 1; unsigned char read_labelStyleAttributes : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) GEOFormattedString *title;
@property (readonly, nonatomic) char hasDetail;
@property (retain, nonatomic) GEOFormattedString *detail;
@property (readonly, nonatomic) char hasIconArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *iconArtwork;
@property (readonly, nonatomic) char hasLabelStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *labelStyleAttributes;
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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
