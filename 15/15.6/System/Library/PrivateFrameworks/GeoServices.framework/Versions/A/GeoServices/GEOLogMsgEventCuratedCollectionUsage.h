@class PBDataReader, NSString, GEOTouristInfo, PBUnknownFields;

@interface GEOLogMsgEventCuratedCollectionUsage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _collectionFirstViewedDate;
    double _collectionLastViewedDate;
    unsigned long long _collectionMuid;
    NSString *_homeCountryCode;
    NSString *_homeMetroRegion;
    GEOTouristInfo *_touristInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _viewsToday;
    struct { unsigned char has_collectionFirstViewedDate : 1; unsigned char has_collectionLastViewedDate : 1; unsigned char has_collectionMuid : 1; unsigned char has_viewsToday : 1; unsigned char read_unknownFields : 1; unsigned char read_homeCountryCode : 1; unsigned char read_homeMetroRegion : 1; unsigned char read_touristInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasCollectionMuid;
@property (nonatomic) unsigned long long collectionMuid;
@property (nonatomic) char hasViewsToday;
@property (nonatomic) unsigned int viewsToday;
@property (nonatomic) char hasCollectionFirstViewedDate;
@property (nonatomic) double collectionFirstViewedDate;
@property (nonatomic) char hasCollectionLastViewedDate;
@property (nonatomic) double collectionLastViewedDate;
@property (readonly, nonatomic) char hasTouristInfo;
@property (retain, nonatomic) GEOTouristInfo *touristInfo;
@property (readonly, nonatomic) char hasHomeCountryCode;
@property (retain, nonatomic) NSString *homeCountryCode;
@property (readonly, nonatomic) char hasHomeMetroRegion;
@property (retain, nonatomic) NSString *homeMetroRegion;
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
