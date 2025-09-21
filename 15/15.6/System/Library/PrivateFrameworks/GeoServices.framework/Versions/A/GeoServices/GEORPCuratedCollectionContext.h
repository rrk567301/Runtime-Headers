@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEORPCuratedCollectionContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _placeEntityMuids;
    unsigned long long _curatedCollectionMuid;
    NSMutableArray *_imageInfos;
    NSString *_originalDescription;
    NSString *_originalName;
    NSString *_originalUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_curatedCollectionMuid : 1; unsigned char read_unknownFields : 1; unsigned char read_placeEntityMuids : 1; unsigned char read_imageInfos : 1; unsigned char read_originalDescription : 1; unsigned char read_originalName : 1; unsigned char read_originalUrl : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasCuratedCollectionMuid;
@property (nonatomic) unsigned long long curatedCollectionMuid;
@property (readonly, nonatomic) unsigned long long placeEntityMuidsCount;
@property (readonly, nonatomic) unsigned long long *placeEntityMuids;
@property (readonly, nonatomic) char hasOriginalName;
@property (retain, nonatomic) NSString *originalName;
@property (readonly, nonatomic) char hasOriginalUrl;
@property (retain, nonatomic) NSString *originalUrl;
@property (readonly, nonatomic) char hasOriginalDescription;
@property (retain, nonatomic) NSString *originalDescription;
@property (retain, nonatomic) NSMutableArray *imageInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)imageInfoType;
+ (char)isValid:(id)a0;

- (void)dealloc;
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
- (void)clearImageInfos;
- (unsigned long long)imageInfosCount;
- (void)addImageInfo:(id)a0;
- (void)addPlaceEntityMuid:(unsigned long long)a0;
- (void)clearPlaceEntityMuids;
- (void)clearUnknownFields:(char)a0;
- (id)imageInfoAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)placeEntityMuidAtIndex:(unsigned long long)a0;
- (void)readAll:(char)a0;
- (void)setPlaceEntityMuids:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
