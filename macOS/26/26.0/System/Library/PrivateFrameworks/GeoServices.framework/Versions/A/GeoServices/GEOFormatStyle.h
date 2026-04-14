@class PBDataReader, NSString, GEOLinkValue, PBUnknownFields;

@interface GEOFormatStyle : PBCodable <GEOServerFormatStyle, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLinkValue *_linkValue;
    NSString *_token;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_linkValue : 1; unsigned char read_token : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) long long styleType;
@property (readonly, nonatomic) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasLinkValue;
@property (retain, nonatomic) GEOLinkValue *linkValue;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)typeAsString:(int)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
