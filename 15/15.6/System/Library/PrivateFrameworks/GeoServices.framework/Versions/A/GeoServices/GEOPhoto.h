@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPhoto : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_photoInfos;
    NSString *_uid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _photoType;
    struct { unsigned char has_photoType : 1; unsigned char read_unknownFields : 1; unsigned char read_photoInfos : 1; unsigned char read_uid : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasPhotoType;
@property (nonatomic) int photoType;
@property (retain, nonatomic) NSMutableArray *photoInfos;
@property (readonly, nonatomic) char hasUid;
@property (retain, nonatomic) NSString *uid;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)photoInfoType;

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
- (void)clearPhotoInfos;
- (unsigned long long)photoInfosCount;
- (int)StringAsPhotoType:(id)a0;
- (void)addPhotoInfo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithPlaceDataPhoto:(id)a0;
- (id)jsonRepresentation;
- (id)photoInfoAtIndex:(unsigned long long)a0;
- (id)photoTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
