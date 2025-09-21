@class HDCodableRoutineLocation;

@interface HDCodableRoutineScenarioTriggeredRequest : PBRequest <NSCopying> {
    struct { unsigned char triggerTypes : 1; } _has;
}

@property (nonatomic) char hasTriggerTypes;
@property (nonatomic) unsigned long long triggerTypes;
@property (readonly, nonatomic) char hasCurrentLocation;
@property (retain, nonatomic) HDCodableRoutineLocation *currentLocation;

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

@end
