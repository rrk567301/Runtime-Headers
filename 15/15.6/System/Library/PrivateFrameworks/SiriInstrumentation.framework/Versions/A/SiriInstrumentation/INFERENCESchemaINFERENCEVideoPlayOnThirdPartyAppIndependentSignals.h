@class NSData;

@interface INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppIndependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char isDeviceLockStatus : 1; unsigned char deviceMotionState : 1; unsigned char intentType : 1; unsigned char nowPlayingState : 1; unsigned char deviceClass : 1; unsigned char clientHourOfDay : 1; unsigned char clientLocale : 1; unsigned char clientLanguage : 1; unsigned char clientRegion : 1; unsigned char bucketedDeviceMotionState : 1; } _has;
}

@property (nonatomic) char isDeviceLockStatus;
@property (nonatomic) char hasIsDeviceLockStatus;
@property (nonatomic) int deviceMotionState;
@property (nonatomic) char hasDeviceMotionState;
@property (nonatomic) int intentType;
@property (nonatomic) char hasIntentType;
@property (nonatomic) int nowPlayingState;
@property (nonatomic) char hasNowPlayingState;
@property (nonatomic) int deviceClass;
@property (nonatomic) char hasDeviceClass;
@property (nonatomic) int clientHourOfDay;
@property (nonatomic) char hasClientHourOfDay;
@property (nonatomic) long long clientLocale;
@property (nonatomic) char hasClientLocale;
@property (nonatomic) long long clientLanguage;
@property (nonatomic) char hasClientLanguage;
@property (nonatomic) long long clientRegion;
@property (nonatomic) char hasClientRegion;
@property (nonatomic) int bucketedDeviceMotionState;
@property (nonatomic) char hasBucketedDeviceMotionState;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBucketedDeviceMotionState;
- (void)deleteClientHourOfDay;
- (void)deleteClientLanguage;
- (void)deleteClientLocale;
- (void)deleteClientRegion;
- (void)deleteDeviceClass;
- (void)deleteDeviceMotionState;
- (void)deleteIntentType;
- (void)deleteIsDeviceLockStatus;
- (void)deleteNowPlayingState;
- (id)suppressMessageUnderConditions;

@end
