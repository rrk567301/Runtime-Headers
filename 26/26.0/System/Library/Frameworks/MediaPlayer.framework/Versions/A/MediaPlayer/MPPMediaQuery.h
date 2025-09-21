@class NSMutableArray;

@interface MPPMediaQuery : PBCodable <NSCopying> {
    struct { unsigned char entityOrder : 1; unsigned char groupingType : 1; unsigned char staticEntityType : 1; unsigned char filteringDisabled : 1; unsigned char includeNonLibraryEntities : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *filterPredicates;
@property (nonatomic) BOOL hasGroupingType;
@property (nonatomic) int groupingType;
@property (nonatomic) BOOL hasFilteringDisabled;
@property (nonatomic) BOOL filteringDisabled;
@property (nonatomic) BOOL hasEntityOrder;
@property (nonatomic) int entityOrder;
@property (retain, nonatomic) NSMutableArray *staticEntityIdentifiers;
@property (nonatomic) BOOL hasStaticEntityType;
@property (nonatomic) int staticEntityType;
@property (nonatomic) BOOL hasIncludeNonLibraryEntities;
@property (nonatomic) BOOL includeNonLibraryEntities;

+ (Class)filterPredicatesType;
+ (Class)staticEntityIdentifiersType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsEntityOrder:(id)a0;
- (int)StringAsStaticEntityType:(id)a0;
- (id)staticEntityIdentifiersAtIndex:(unsigned long long)a0;
- (int)StringAsGroupingType:(id)a0;
- (void)addFilterPredicates:(id)a0;
- (void)addStaticEntityIdentifiers:(id)a0;
- (void)clearFilterPredicates;
- (void)clearStaticEntityIdentifiers;
- (id)entityOrderAsString:(int)a0;
- (id)filterPredicatesAtIndex:(unsigned long long)a0;
- (unsigned long long)filterPredicatesCount;
- (id)groupingTypeAsString:(int)a0;
- (unsigned long long)staticEntityIdentifiersCount;
- (id)staticEntityTypeAsString:(int)a0;

@end
