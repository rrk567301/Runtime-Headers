@class NSMutableArray;

@interface CLPCellNeighborsGroup : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *gsmNeighbors;
@property (retain, nonatomic) NSMutableArray *scdmaNeighbors;
@property (retain, nonatomic) NSMutableArray *cdmaNeighbors;
@property (retain, nonatomic) NSMutableArray *lteNeighbors;
@property (retain, nonatomic) NSMutableArray *nrNeighbors;

+ (Class)gsmNeighborsType;
+ (Class)scdmaNeighborsType;
+ (Class)cdmaNeighborsType;
+ (Class)lteNeighborsType;
+ (Class)nrNeighborsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearGsmNeighbors;
- (void)addGsmNeighbors:(id)a0;
- (unsigned long long)gsmNeighborsCount;
- (id)gsmNeighborsAtIndex:(unsigned long long)a0;
- (void)clearScdmaNeighbors;
- (void)addScdmaNeighbors:(id)a0;
- (unsigned long long)scdmaNeighborsCount;
- (id)scdmaNeighborsAtIndex:(unsigned long long)a0;
- (void)clearCdmaNeighbors;
- (void)addCdmaNeighbors:(id)a0;
- (unsigned long long)cdmaNeighborsCount;
- (id)cdmaNeighborsAtIndex:(unsigned long long)a0;
- (void)clearLteNeighbors;
- (void)addLteNeighbors:(id)a0;
- (unsigned long long)lteNeighborsCount;
- (id)lteNeighborsAtIndex:(unsigned long long)a0;
- (void)clearNrNeighbors;
- (void)addNrNeighbors:(id)a0;
- (unsigned long long)nrNeighborsCount;
- (id)nrNeighborsAtIndex:(unsigned long long)a0;

@end
