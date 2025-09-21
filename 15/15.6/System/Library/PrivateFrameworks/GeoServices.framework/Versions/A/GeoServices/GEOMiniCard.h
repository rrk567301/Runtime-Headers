@class PBDataReader, NSString, GEOFormattedString, PBUnknownFields;

@interface GEOMiniCard : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_buttonText;
    GEOFormattedString *_detail;
    GEOFormattedString *_metadata;
    GEOFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _shouldEmphasize;
    struct { unsigned char has_shouldEmphasize : 1; unsigned char read_unknownFields : 1; unsigned char read_buttonText : 1; unsigned char read_detail : 1; unsigned char read_metadata : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) GEOFormattedString *title;
@property (readonly, nonatomic) char hasDetail;
@property (retain, nonatomic) GEOFormattedString *detail;
@property (readonly, nonatomic) char hasButtonText;
@property (retain, nonatomic) NSString *buttonText;
@property (nonatomic) char hasShouldEmphasize;
@property (nonatomic) char shouldEmphasize;
@property (readonly, nonatomic) char hasMetadata;
@property (retain, nonatomic) GEOFormattedString *metadata;
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
