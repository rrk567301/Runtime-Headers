@class PBDataReader, GEOFormattedString, PBUnknownFields;

@interface GEOPlaceFormattedString : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_contactHome;
    GEOFormattedString *_contactOther;
    GEOFormattedString *_contactWork;
    GEOFormattedString *_custom;
    GEOFormattedString *_home;
    GEOFormattedString *_pointOfInterest;
    GEOFormattedString *_streetAddress;
    GEOFormattedString *_unknown;
    GEOFormattedString *_work;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_contactHome : 1; unsigned char read_contactOther : 1; unsigned char read_contactWork : 1; unsigned char read_custom : 1; unsigned char read_home : 1; unsigned char read_pointOfInterest : 1; unsigned char read_streetAddress : 1; unsigned char read_unknown : 1; unsigned char read_work : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasHome;
@property (retain, nonatomic) GEOFormattedString *home;
@property (readonly, nonatomic) char hasWork;
@property (retain, nonatomic) GEOFormattedString *work;
@property (readonly, nonatomic) char hasContactWork;
@property (retain, nonatomic) GEOFormattedString *contactWork;
@property (readonly, nonatomic) char hasContactHome;
@property (retain, nonatomic) GEOFormattedString *contactHome;
@property (readonly, nonatomic) char hasContactOther;
@property (retain, nonatomic) GEOFormattedString *contactOther;
@property (readonly, nonatomic) char hasPointOfInterest;
@property (retain, nonatomic) GEOFormattedString *pointOfInterest;
@property (readonly, nonatomic) char hasStreetAddress;
@property (retain, nonatomic) GEOFormattedString *streetAddress;
@property (readonly, nonatomic) char hasUnknown;
@property (retain, nonatomic) GEOFormattedString *unknown;
@property (readonly, nonatomic) char hasCustom;
@property (retain, nonatomic) GEOFormattedString *custom;
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
