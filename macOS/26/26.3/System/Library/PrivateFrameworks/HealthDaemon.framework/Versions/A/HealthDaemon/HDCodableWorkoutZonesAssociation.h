@class NSData, HDCodableSyncIdentity;

@interface HDCodableWorkoutZonesAssociation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasWorkoutUUID;
@property (retain, nonatomic) NSData *workoutUUID;
@property (readonly, nonatomic) BOOL hasZonesSampleUUID;
@property (retain, nonatomic) NSData *zonesSampleUUID;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
