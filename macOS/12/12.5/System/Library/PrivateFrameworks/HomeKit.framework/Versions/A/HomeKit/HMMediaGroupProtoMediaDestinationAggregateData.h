@class NSMutableArray;

@interface HMMediaGroupProtoMediaDestinationAggregateData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *destinations;
@property (retain, nonatomic) NSMutableArray *destinationControllerDatas;
@property (retain, nonatomic) NSMutableArray *groups;

+ (Class)destinationType;
+ (Class)groupType;
+ (Class)destinationControllerDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addDestination:(id)a0;
- (unsigned long long)destinationsCount;
- (void)clearDestinations;
- (id)destinationAtIndex:(unsigned long long)a0;
- (unsigned long long)groupsCount;
- (void)clearGroups;
- (void)addGroup:(id)a0;
- (id)groupAtIndex:(unsigned long long)a0;
- (void)addDestinationControllerData:(id)a0;
- (unsigned long long)destinationControllerDatasCount;
- (void)clearDestinationControllerDatas;
- (id)destinationControllerDataAtIndex:(unsigned long long)a0;

@end
