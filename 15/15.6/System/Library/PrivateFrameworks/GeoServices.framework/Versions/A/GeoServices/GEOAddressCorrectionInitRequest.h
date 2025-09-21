@class NSString, PBDataReader;

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    NSString *_personID;
    NSString *_token;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _supportsCollectionByRegion;
    char _supportsMultipleAddresses;
    struct { unsigned char has_supportsCollectionByRegion : 1; unsigned char has_supportsMultipleAddresses : 1; unsigned char read_personID : 1; unsigned char read_token : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasToken;
@property (retain, nonatomic) NSString *token;
@property (readonly, nonatomic) char hasPersonID;
@property (retain, nonatomic) NSString *personID;
@property (nonatomic) char hasSupportsMultipleAddresses;
@property (nonatomic) char supportsMultipleAddresses;
@property (nonatomic) char hasSupportsCollectionByRegion;
@property (nonatomic) char supportsCollectionByRegion;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
