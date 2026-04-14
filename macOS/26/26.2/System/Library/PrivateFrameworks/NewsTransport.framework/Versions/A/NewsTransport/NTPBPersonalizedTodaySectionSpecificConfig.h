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

- (void)addMandatoryArticles:(id)a0;
- (void)clearPersonalizedArticles;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)mandatoryArticlesCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mandatoryArticlesAtIndex:(unsigned long long)a0;
- (void)clearMandatoryArticles;
- (BOOL)readFrom:(id)a0;
- (id)personalizedArticlesAtIndex:(unsigned long long)a0;
- (id)description;
- (unsigned long long)personalizedArticlesCount;
- (void)addPersonalizedArticles:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;

@end
