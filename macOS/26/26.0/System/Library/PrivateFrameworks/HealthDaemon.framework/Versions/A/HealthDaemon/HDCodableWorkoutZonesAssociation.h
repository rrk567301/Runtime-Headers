@class NSData, HDCodableSyncIdentity;

@interface HDCodableWorkoutZonesAssociation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasWorkoutUUID;
@property (retain, nonatomic) NSData *workoutUUID;
@property (readonly, nonatomic) BOOL hasZonesSampleUUID;
@property (retain, nonatomic) NSData *zonesSampleUUID;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

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

@end
