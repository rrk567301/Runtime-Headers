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

- (void)clearFilters;
- (unsigned long long)filtersCount;
- (unsigned long long)typesCount;
- (void)writeTo:(id)a0;
- (unsigned long long)sortsCount;
- (id)sortsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)queryOperatorAsString:(int)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (id)filtersAtIndex:(unsigned long long)a0;
- (int)StringAsQueryOperator:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addTypes:(id)a0;
- (id)description;
- (id)typesAtIndex:(unsigned long long)a0;
- (void)clearTypes;
- (void)mergeFrom:(id)a0;
- (void)clearSorts;
- (id)dictionaryRepresentation;
- (void)addSorts:(id)a0;
- (void)addFilters:(id)a0;

@end
