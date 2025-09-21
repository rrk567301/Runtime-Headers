@class NSMutableArray;

@interface NTPBItemsTodaySectionSpecificConfig : PBCodable <NSCopying> {
    struct { unsigned char maxArticlesShown : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL hasMaxArticlesShown;
@property (nonatomic) unsigned long long maxArticlesShown;

+ (Class)itemsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addItems:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)itemsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)itemsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)clearItems;
- (BOOL)isEqual:(id)a0;

@end
