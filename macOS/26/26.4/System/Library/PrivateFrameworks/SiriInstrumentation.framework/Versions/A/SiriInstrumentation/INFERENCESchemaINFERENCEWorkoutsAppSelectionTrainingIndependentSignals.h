@class NSData, INFERENCESchemaINFERENCECommonAppIndependentSignals;

@interface INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char nowPlayingState : 1; unsigned char deviceMotionState : 1; unsigned char isDeviceLockStatus : 1; unsigned char isMobileDataOn : 1; unsigned char isWifiOn : 1; unsigned char workoutType : 1; unsigned char isIndoorWorkout : 1; } _has;
}

@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppIndependentSignals *commonIndependent;
@property (nonatomic) BOOL hasCommonIndependent;
@property (nonatomic) int nowPlayingState;
@property (nonatomic) BOOL hasNowPlayingState;
@property (nonatomic) int deviceMotionState;
@property (nonatomic) BOOL hasDeviceMotionState;
@property (nonatomic) BOOL isDeviceLockStatus;
@property (nonatomic) BOOL hasIsDeviceLockStatus;
@property (nonatomic) BOOL isMobileDataOn;
@property (nonatomic) BOOL hasIsMobileDataOn;
@property (nonatomic) BOOL isWifiOn;
@property (nonatomic) BOOL hasIsWifiOn;
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
- (void)deleteCommonIndependent;
- (void)deleteDeviceMotionState;
- (void)deleteIsDeviceLockStatus;
- (void)deleteIsIndoorWorkout;
- (void)deleteIsMobileDataOn;
- (void)deleteIsWifiOn;
- (void)deleteNowPlayingState;
- (void)deleteWorkoutType;

@end
