@class NSData, NSString, PCPLocation;

@interface PCPWorkout : PBCodable <NSCopying> {
    struct { unsigned char endTimeCFAbsolute : 1; unsigned char startTimeCFAbsolute : 1; unsigned char workoutActivityType : 1; unsigned char sessionLocationType : 1; unsigned char swimmingLocationType : 1; } _has;
}

@property (nonatomic) BOOL hasWorkoutActivityType;
@property (nonatomic) unsigned long long workoutActivityType;
@property (nonatomic) BOOL hasStartTimeCFAbsolute;
@property (nonatomic) double startTimeCFAbsolute;
@property (nonatomic) BOOL hasEndTimeCFAbsolute;
@property (nonatomic) double endTimeCFAbsolute;
@property (readonly, nonatomic) BOOL hasHkObjectUUID;
@property (retain, nonatomic) NSData *hkObjectUUID;
@property (readonly, nonatomic) BOOL hasSourceBundleIdentifier;
@property (retain, nonatomic) NSString *sourceBundleIdentifier;
@property (readonly, nonatomic) BOOL hasWorkoutStartLocation;
@property (retain, nonatomic) PCPLocation *workoutStartLocation;
@property (nonatomic) BOOL hasSessionLocationType;
@property (nonatomic) int sessionLocationType;
@property (nonatomic) BOOL hasSwimmingLocationType;
@property (nonatomic) int swimmingLocationType;

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
- (int)StringAsSessionLocationType:(id)a0;
- (int)StringAsSwimmingLocationType:(id)a0;
- (id)sessionLocationTypeAsString:(int)a0;
- (id)swimmingLocationTypeAsString:(int)a0;

@end
