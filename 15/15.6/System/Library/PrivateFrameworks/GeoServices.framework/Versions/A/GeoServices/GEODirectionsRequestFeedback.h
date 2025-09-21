@class NSString, PBDataReader, PBUnknownFields;

@interface GEODirectionsRequestFeedback : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_appIdentifier;
    NSString *_requestingAppId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _purpose;
    int _source;
    struct { unsigned char has_purpose : 1; unsigned char has_source : 1; unsigned char read_unknownFields : 1; unsigned char read_appIdentifier : 1; unsigned char read_requestingAppId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasPurpose;
@property (nonatomic) int purpose;
@property (nonatomic) char hasSource;
@property (nonatomic) int source;
@property (readonly, nonatomic) char hasAppIdentifier;
@property (retain, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) char hasRequestingAppId;
@property (retain, nonatomic) NSString *requestingAppId;
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
- (id)sourceAsString:(int)a0;
- (int)StringAsSource:(id)a0;
- (int)StringAsPurpose:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithPurpose:(int)a0;
- (id)initWithPurpose:(int)a0 andSource:(int)a1;
- (id)initWithPurpose:(int)a0 andSource:(int)a1 andIdentifier:(id)a2;
- (id)jsonRepresentation;
- (id)purposeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
