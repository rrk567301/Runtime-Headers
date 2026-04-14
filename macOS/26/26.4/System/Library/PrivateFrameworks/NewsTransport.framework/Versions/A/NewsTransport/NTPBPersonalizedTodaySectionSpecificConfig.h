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

- (unsigned long long)mandatoryArticlesCount;
- (id)mandatoryArticlesAtIndex:(unsigned long long)a0;
- (void)addMandatoryArticles:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)personalizedArticlesCount;
- (void)addPersonalizedArticles:(id)a0;
- (void)clearMandatoryArticles;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)personalizedArticlesAtIndex:(unsigned long long)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (void)clearPersonalizedArticles;

@end
