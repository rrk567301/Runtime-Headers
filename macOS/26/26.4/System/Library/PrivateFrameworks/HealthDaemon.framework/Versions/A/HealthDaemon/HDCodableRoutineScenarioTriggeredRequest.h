@class HDCodableRoutineLocation;

@interface HDCodableRoutineScenarioTriggeredRequest : PBRequest <NSCopying> {
    struct { unsigned char triggerTypes : 1; } _has;
}

@property (nonatomic) BOOL hasTriggerTypes;
@property (nonatomic) unsigned long long triggerTypes;
@property (readonly, nonatomic) BOOL hasCurrentLocation;
@property (retain, nonatomic) HDCodableRoutineLocation *currentLocation;

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

@end
