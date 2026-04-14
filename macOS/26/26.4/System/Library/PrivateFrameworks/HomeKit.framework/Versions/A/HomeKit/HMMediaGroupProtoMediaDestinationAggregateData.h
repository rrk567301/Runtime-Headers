@class NSMutableArray;

@interface HMMediaGroupProtoMediaDestinationAggregateData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *destinations;
@property (retain, nonatomic) NSMutableArray *destinationControllerDatas;
@property (retain, nonatomic) NSMutableArray *groups;

+ (Class)groupType;
+ (Class)destinationType;
+ (Class)destinationControllerDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addDestination:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)clearDestinations;
- (void)clearGroups;
- (id)destinationAtIndex:(unsigned long long)a0;
- (unsigned long long)destinationsCount;
- (unsigned long long)groupsCount;
- (void)addGroup:(id)a0;
- (id)groupAtIndex:(unsigned long long)a0;
- (void)clearDestinationControllerDatas;
- (unsigned long long)destinationControllerDatasCount;
- (void)addDestinationControllerData:(id)a0;
- (id)destinationControllerDataAtIndex:(unsigned long long)a0;

@end
