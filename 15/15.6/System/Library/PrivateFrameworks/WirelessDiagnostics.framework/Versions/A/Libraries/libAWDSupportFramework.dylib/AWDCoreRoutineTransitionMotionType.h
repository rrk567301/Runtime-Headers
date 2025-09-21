@interface AWDCoreRoutineTransitionMotionType : PBCodable <NSCopying> {
    struct { unsigned char coreRoutineTransitionMotionTypeAutomotive : 1; unsigned char coreRoutineTransitionMotionTypeCycling : 1; unsigned char coreRoutineTransitionMotionTypeRunning : 1; unsigned char coreRoutineTransitionMotionTypeStationary : 1; unsigned char coreRoutineTransitionMotionTypeUnknown : 1; unsigned char coreRoutineTransitionMotionTypeWalking : 1; } _has;
}

@property (nonatomic) char hasCoreRoutineTransitionMotionTypeStationary;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeStationary;
@property (nonatomic) char hasCoreRoutineTransitionMotionTypeWalking;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeWalking;
@property (nonatomic) char hasCoreRoutineTransitionMotionTypeRunning;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeRunning;
@property (nonatomic) char hasCoreRoutineTransitionMotionTypeAutomotive;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeAutomotive;
@property (nonatomic) char hasCoreRoutineTransitionMotionTypeCycling;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeCycling;
@property (nonatomic) char hasCoreRoutineTransitionMotionTypeUnknown;
@property (nonatomic) unsigned int coreRoutineTransitionMotionTypeUnknown;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
