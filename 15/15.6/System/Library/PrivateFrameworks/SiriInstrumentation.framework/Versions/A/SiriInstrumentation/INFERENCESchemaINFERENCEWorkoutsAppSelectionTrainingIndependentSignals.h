@class NSData, INFERENCESchemaINFERENCECommonAppIndependentSignals;

@interface INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char nowPlayingState : 1; unsigned char deviceMotionState : 1; unsigned char isDeviceLockStatus : 1; unsigned char isMobileDataOn : 1; unsigned char isWifiOn : 1; unsigned char workoutType : 1; unsigned char isIndoorWorkout : 1; } _has;
}

@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppIndependentSignals *commonIndependent;
@property (nonatomic) char hasCommonIndependent;
@property (nonatomic) int nowPlayingState;
@property (nonatomic) char hasNowPlayingState;
@property (nonatomic) int deviceMotionState;
@property (nonatomic) char hasDeviceMotionState;
@property (nonatomic) char isDeviceLockStatus;
@property (nonatomic) char hasIsDeviceLockStatus;
@property (nonatomic) char isMobileDataOn;
@property (nonatomic) char hasIsMobileDataOn;
@property (nonatomic) char isWifiOn;
@property (nonatomic) char hasIsWifiOn;
@property (nonatomic) int workoutType;
@property (nonatomic) char hasWorkoutType;
@property (nonatomic) char isIndoorWorkout;
@property (nonatomic) char hasIsIndoorWorkout;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCommonIndependent;
- (void)deleteDeviceMotionState;
- (void)deleteIsDeviceLockStatus;
- (void)deleteIsIndoorWorkout;
- (void)deleteIsMobileDataOn;
- (void)deleteIsWifiOn;
- (void)deleteNowPlayingState;
- (void)deleteWorkoutType;
- (id)suppressMessageUnderConditions;

@end
