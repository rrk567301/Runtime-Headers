@class NSMutableArray;

@interface HMMediaGroupProtoMediaDestinationAggregateData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *destinations;
@property (retain, nonatomic) NSMutableArray *destinationControllerDatas;
@property (retain, nonatomic) NSMutableArray *groups;

+ (Class)destinationType;
+ (Class)groupType;
+ (Class)destinationControllerDataType;

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
- (void)clearDestinations;
- (void)addDestination:(id)a0;
- (unsigned long long)destinationsCount;
- (id)destinationAtIndex:(unsigned long long)a0;
- (void)clearGroups;
- (unsigned long long)groupsCount;
- (void)addGroup:(id)a0;
- (id)groupAtIndex:(unsigned long long)a0;
- (void)clearDestinationControllerDatas;
- (void)addDestinationControllerData:(id)a0;
- (unsigned long long)destinationControllerDatasCount;
- (id)destinationControllerDataAtIndex:(unsigned long long)a0;

@end
