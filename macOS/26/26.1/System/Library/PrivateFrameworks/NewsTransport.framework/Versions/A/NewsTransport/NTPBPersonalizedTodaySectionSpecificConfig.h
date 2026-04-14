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

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)addMandatoryArticles:(id)a0;
- (id)personalizedArticlesAtIndex:(unsigned long long)a0;
- (id)description;
- (void)clearMandatoryArticles;
- (void)dealloc;
- (unsigned long long)personalizedArticlesCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mandatoryArticlesAtIndex:(unsigned long long)a0;
- (void)addPersonalizedArticles:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearPersonalizedArticles;
- (unsigned long long)mandatoryArticlesCount;
- (void)writeTo:(id)a0;

@end
