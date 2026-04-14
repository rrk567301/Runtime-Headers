@class NSData, INFERENCESchemaINFERENCECommonAppDependentSignals;

@interface INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingDependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char workoutType : 1; unsigned char isIndoorWorkout : 1; } _has;
}

@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppDependentSignals *commonDependent;
@property (nonatomic) BOOL hasCommonDependent;
@property (nonatomic) int workoutType;
@property (nonatomic) BOOL hasWorkoutType;
@property (nonatomic) BOOL isIndoorWorkout;
@property (nonatomic) BOOL hasIsIndoorWorkout;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCommonDependent;
- (void)deleteIsIndoorWorkout;
- (void)deleteWorkoutType;

@end
