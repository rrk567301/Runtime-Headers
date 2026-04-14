@class NSData, INFERENCESchemaINFERENCECommonAppIndependentSignals;

@interface INFERENCESchemaINFERENCEWorkoutsAppSelectionTrainingIndependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char nowPlayingState : 1; unsigned char deviceMotionState : 1; unsigned char isDeviceLockStatus : 1; unsigned char isMobileDataOn : 1; unsigned char isWifiOn : 1; } _has;
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
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteNowPlayingState;
- (void)deleteIsDeviceLockStatus;
- (void)deleteDeviceMotionState;
- (void)deleteCommonIndependent;
- (void)deleteIsMobileDataOn;
- (void)deleteIsWifiOn;

@end
