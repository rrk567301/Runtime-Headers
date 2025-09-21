@class NSString, _BlastDoorASCodableSample;

@interface _BlastDoorASCodableAchievement : PBCodable <NSCopying> {
    struct { unsigned char completedDate : 1; unsigned char doubleValue : 1; unsigned char intValue : 1; unsigned char workoutActivityType : 1; } _has;
}

@property (readonly, nonatomic) char hasSample;
@property (retain, nonatomic) _BlastDoorASCodableSample *sample;
@property (nonatomic) char hasCompletedDate;
@property (nonatomic) double completedDate;
@property (nonatomic) char hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) char hasIntValue;
@property (nonatomic) long long intValue;
@property (nonatomic) char hasWorkoutActivityType;
@property (nonatomic) long long workoutActivityType;
@property (readonly, nonatomic) char hasDefinitionIdentifier;
@property (retain, nonatomic) NSString *definitionIdentifier;
@property (readonly, nonatomic) char hasTemplateUniqueName;
@property (retain, nonatomic) NSString *templateUniqueName;

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
