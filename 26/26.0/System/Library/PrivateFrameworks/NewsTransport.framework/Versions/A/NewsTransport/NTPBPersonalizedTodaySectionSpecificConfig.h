@class NSMutableArray;

@interface NTPBPersonalizedTodaySectionSpecificConfig : PBCodable <NSCopying> {
    struct { unsigned char maxArticlesShown : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *mandatoryArticles;
@property (retain, nonatomic) NSMutableArray *personalizedArticles;
@property (nonatomic) BOOL hasMaxArticlesShown;
@property (nonatomic) unsigned long long maxArticlesShown;

+ (Class)mandatoryArticlesType;
+ (Class)personalizedArticlesType;

- (id)personalizedArticlesAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)mandatoryArticlesCount;
- (void)mergeFrom:(id)a0;
- (void)addPersonalizedArticles:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearMandatoryArticles;
- (unsigned long long)personalizedArticlesCount;
- (void)writeTo:(id)a0;
- (void)addMandatoryArticles:(id)a0;
- (unsigned long long)hash;
- (void)clearPersonalizedArticles;
- (id)mandatoryArticlesAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;

@end
