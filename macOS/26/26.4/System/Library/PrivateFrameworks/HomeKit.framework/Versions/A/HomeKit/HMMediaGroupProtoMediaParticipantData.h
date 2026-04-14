@class HMMediaGroupProtoMediaDestination, HMMediaGroupProtoMediaDestinationControllerData, NSMutableArray;

@interface HMMediaGroupProtoMediaParticipantData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDestination;
@property (retain, nonatomic) HMMediaGroupProtoMediaDestination *destination;
@property (readonly, nonatomic) BOOL hasDestinationController;
@property (retain, nonatomic) HMMediaGroupProtoMediaDestinationControllerData *destinationController;
@property (retain, nonatomic) NSMutableArray *backupGroups;

+ (Class)backupGroupsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addBackupGroups:(id)a0;
- (id)backupGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)backupGroupsCount;
- (void)clearBackupGroups;

@end
