@class HMMediaGroupProtoMediaDestination, HMMediaGroupProtoMediaDestinationControllerData, NSMutableArray;

@interface HMMediaGroupProtoMediaParticipantData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDestination;
@property (retain, nonatomic) HMMediaGroupProtoMediaDestination *destination;
@property (readonly, nonatomic) BOOL hasDestinationController;
@property (retain, nonatomic) HMMediaGroupProtoMediaDestinationControllerData *destinationController;
@property (retain, nonatomic) NSMutableArray *backupGroups;

+ (Class)backupGroupsType;

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
- (void)addBackupGroups:(id)a0;
- (id)backupGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)backupGroupsCount;
- (void)clearBackupGroups;

@end
