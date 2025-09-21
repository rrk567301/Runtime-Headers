@class NSString;

@interface PCPMapItem : PBCodable <NSCopying> {
    struct { unsigned char mapItemMUID : 1; unsigned char placeSource : 1; unsigned char placeType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPlaceName;
@property (retain, nonatomic) NSString *placeName;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) BOOL hasPlaceType;
@property (nonatomic) int placeType;
@property (nonatomic) BOOL hasPlaceSource;
@property (nonatomic) unsigned long long placeSource;
@property (nonatomic) BOOL hasMapItemMUID;
@property (nonatomic) unsigned long long mapItemMUID;

- (int)StringAsPlaceType:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (id)placeTypeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
