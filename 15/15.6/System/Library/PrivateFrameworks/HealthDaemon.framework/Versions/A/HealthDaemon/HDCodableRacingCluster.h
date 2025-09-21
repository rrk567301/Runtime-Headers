@class HDCodableRacingMetrics, NSString, NSData, HDCodableSyncIdentity, NSMutableArray;

@interface HDCodableRacingCluster : PBCodable <NSCopying> {
    struct { unsigned char relevance : 1; unsigned char activityType : 1; unsigned char clusterSize : 1; unsigned char final : 1; } _has;
}

@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (readonly, nonatomic) char hasWorkoutClusterUUID;
@property (retain, nonatomic) NSData *workoutClusterUUID;
@property (nonatomic) char hasRelevance;
@property (nonatomic) double relevance;
@property (nonatomic) char hasClusterSize;
@property (nonatomic) int clusterSize;
@property (nonatomic) char hasActivityType;
@property (nonatomic) int activityType;
@property (readonly, nonatomic) char hasRouteSnapshot;
@property (retain, nonatomic) NSData *routeSnapshot;
@property (readonly, nonatomic) char hasRouteLabel;
@property (retain, nonatomic) NSString *routeLabel;
@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;
@property (readonly, nonatomic) char hasLastWorkoutMetrics;
@property (retain, nonatomic) HDCodableRacingMetrics *lastWorkoutMetrics;
@property (readonly, nonatomic) char hasBestWorkoutMetrics;
@property (retain, nonatomic) HDCodableRacingMetrics *bestWorkoutMetrics;
@property (nonatomic) char hasFinal;
@property (nonatomic) char final;
@property (retain, nonatomic) NSMutableArray *eligibleClusterUUIDs;

+ (Class)eligibleClusterUUIDsType;

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
- (void)addEligibleClusterUUIDs:(id)a0;
- (void)clearEligibleClusterUUIDs;
- (id)eligibleClusterUUIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)eligibleClusterUUIDsCount;

@end
