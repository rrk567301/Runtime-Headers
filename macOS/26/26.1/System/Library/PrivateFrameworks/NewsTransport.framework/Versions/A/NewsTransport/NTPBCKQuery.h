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

- (unsigned long long)typesCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)addTypes:(id)a0;
- (id)filtersAtIndex:(unsigned long long)a0;
- (void)addSorts:(id)a0;
- (id)sortsAtIndex:(unsigned long long)a0;
- (void)clearSorts;
- (void)addFilters:(id)a0;
- (void)clearFilters;
- (void)clearTypes;
- (unsigned long long)filtersCount;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)typesAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)sortsCount;
- (void)writeTo:(id)a0;

@end
