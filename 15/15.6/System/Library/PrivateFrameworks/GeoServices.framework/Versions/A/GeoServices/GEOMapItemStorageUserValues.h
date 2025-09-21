@class PBDataReader, NSString, NSData, PBUnknownFields;

@interface GEOMapItemStorageUserValues : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_name;
    NSString *_phoneNumber;
    NSData *_timeZoneData;
    NSString *_timeZoneName;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_name : 1; unsigned char read_phoneNumber : 1; unsigned char read_timeZoneData : 1; unsigned char read_timeZoneName : 1; unsigned char read_url : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasPhoneNumber;
@property (retain, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) char hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) char hasTimeZoneName;
@property (retain, nonatomic) NSString *timeZoneName;
@property (readonly, nonatomic) char hasTimeZoneData;
@property (retain, nonatomic) NSData *timeZoneData;
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
