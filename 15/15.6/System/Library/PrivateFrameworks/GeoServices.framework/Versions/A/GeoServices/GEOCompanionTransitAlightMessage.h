@class GEOPBTransitArtwork, NSString, GEOFormattedString, PBDataReader;

@interface GEOCompanionTransitAlightMessage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPBTransitArtwork *_artwork;
    GEOFormattedString *_detail;
    NSString *_identifier;
    GEOFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _stepID;
    unsigned int _stopID;
    struct { unsigned char has_stepID : 1; unsigned char has_stopID : 1; unsigned char read_artwork : 1; unsigned char read_detail : 1; unsigned char read_identifier : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) char hasStopID;
@property (nonatomic) unsigned int stopID;
@property (readonly, nonatomic) char hasArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) GEOFormattedString *title;
@property (readonly, nonatomic) char hasDetail;
@property (retain, nonatomic) GEOFormattedString *detail;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
