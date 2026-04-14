@class NSMutableArray;

@interface NTPBCKQuery : PBCodable <NSCopying> {
    struct { unsigned char queryOperator : 1; unsigned char distinct : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *types;
@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableArray *sorts;
@property (nonatomic) BOOL hasDistinct;
@property (nonatomic) BOOL distinct;
@property (nonatomic) BOOL hasQueryOperator;
@property (nonatomic) int queryOperator;

+ (Class)filtersType;
+ (Class)sortsType;
+ (Class)typesType;

- (unsigned long long)filtersCount;
- (void)clearSorts;
- (id)filtersAtIndex:(unsigned long long)a0;
- (void)clearFilters;
- (id)dictionaryRepresentation;
- (void)addFilters:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)typesAtIndex:(unsigned long long)a0;
- (id)sortsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTypes:(id)a0;
- (unsigned long long)typesCount;
- (void).cxx_destruct;
- (void)addSorts:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearTypes;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)sortsCount;
- (unsigned long long)hash;

@end
