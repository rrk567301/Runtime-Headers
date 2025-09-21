@class HMMediaGroupProtoMediaDestination, HMMediaGroupProtoMediaDestinationControllerData, NSMutableArray;

@interface HMMediaGroupProtoMediaParticipantData : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasDestination;
@property (retain, nonatomic) HMMediaGroupProtoMediaDestination *destination;
@property (readonly, nonatomic) char hasDestinationController;
@property (retain, nonatomic) HMMediaGroupProtoMediaDestinationControllerData *destinationController;
@property (retain, nonatomic) NSMutableArray *backupGroups;

+ (Class)backupGroupsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addBackupGroups:(id)a0;
- (id)backupGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)backupGroupsCount;
- (void)clearBackupGroups;

@end
