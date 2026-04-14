@class NSMutableArray;

@interface CKDPQuery : PBCodable <NSCopying> {
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

- (void)addTypes:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)filtersAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)sortsAtIndex:(unsigned long long)a0;
- (void)clearTypes;
- (unsigned long long)typesCount;
- (void)mergeFrom:(id)a0;
- (void)clearFilters;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)filtersCount;
- (unsigned long long)sortsCount;
- (void)clearSorts;
- (void)addSorts:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFilters:(id)a0;
- (unsigned long long)hash;
- (id)queryOperatorAsString:(int)a0;
- (BOOL)isEqual:(id)a0;
- (int)StringAsQueryOperator:(id)a0;
- (void).cxx_destruct;
- (id)typesAtIndex:(unsigned long long)a0;

@end
