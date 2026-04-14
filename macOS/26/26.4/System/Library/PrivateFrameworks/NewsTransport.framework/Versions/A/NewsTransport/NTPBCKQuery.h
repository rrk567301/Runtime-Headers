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

- (void)addSorts:(id)a0;
- (unsigned long long)filtersCount;
- (void)addFilters:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)filtersAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)typesCount;
- (id)sortsAtIndex:(unsigned long long)a0;
- (void)clearFilters;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addTypes:(id)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearTypes;
- (void)mergeFrom:(id)a0;
- (unsigned long long)sortsCount;
- (id)description;
- (void)clearSorts;
- (id)typesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;

@end
