@class NSString, PBDataReader, PBUnknownFields;

@interface GEOSharedNavSenderInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_fromDisplayName;
    NSString *_fromIdentifier;
    NSString *_localContactIdentifier;
    NSString *_localName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_fromDisplayName : 1; unsigned char read_fromIdentifier : 1; unsigned char read_localContactIdentifier : 1; unsigned char read_localName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasLocalName;
@property (retain, nonatomic) NSString *localName;
@property (readonly, nonatomic) char hasLocalContactIdentifier;
@property (retain, nonatomic) NSString *localContactIdentifier;
@property (readonly, nonatomic) char hasFromIdentifier;
@property (retain, nonatomic) NSString *fromIdentifier;
@property (readonly, nonatomic) char hasFromDisplayName;
@property (retain, nonatomic) NSString *fromDisplayName;
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
