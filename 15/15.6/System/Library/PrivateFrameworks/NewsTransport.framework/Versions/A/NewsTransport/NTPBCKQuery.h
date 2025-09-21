@class NSMutableArray;

@interface NTPBCKQuery : PBCodable <NSCopying> {
    struct { unsigned char queryOperator : 1; unsigned char distinct : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *types;
@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableArray *sorts;
@property (nonatomic) char hasDistinct;
@property (nonatomic) char distinct;
@property (nonatomic) char hasQueryOperator;
@property (nonatomic) int queryOperator;

+ (Class)filtersType;
+ (Class)sortsType;
+ (Class)typesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFilters:(id)a0;
- (void)clearFilters;
- (unsigned long long)filtersCount;
- (id)filtersAtIndex:(unsigned long long)a0;
- (void)addSorts:(id)a0;
- (void)addTypes:(id)a0;
- (void)clearSorts;
- (void)clearTypes;
- (id)sortsAtIndex:(unsigned long long)a0;
- (unsigned long long)sortsCount;
- (id)typesAtIndex:(unsigned long long)a0;
- (unsigned long long)typesCount;

@end
