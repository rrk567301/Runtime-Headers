@class NSString, BMSiriAssistantSuggestionFeaturesEnvironmentFeaturesHomeGraphStatus;

@interface BMSiriAssistantSuggestionFeaturesEnvironmentFeatures : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *focusMode;
@property (readonly, nonatomic) NSString *deviceMotion;
@property (readonly, nonatomic) int location;
@property (readonly, nonatomic) NSString *isPlayingMedia;
@property (readonly, nonatomic) char isAirplaneMode;
@property (nonatomic) char hasIsAirplaneMode;
@property (readonly, nonatomic) char isTimerRunning;
@property (nonatomic) char hasIsTimerRunning;
@property (readonly, nonatomic) char isConnectedToWifi;
@property (nonatomic) char hasIsConnectedToWifi;
@property (readonly, nonatomic) char hasInternetConnection;
@property (nonatomic) char hasHasInternetConnection;
@property (readonly, nonatomic) char isScreenSharing;
@property (nonatomic) char hasIsScreenSharing;
@property (readonly, nonatomic) char audioIsMuted;
@property (nonatomic) char hasAudioIsMuted;
@property (readonly, nonatomic) int screenBrightness;
@property (nonatomic) char hasScreenBrightness;
@property (readonly, nonatomic) BMSiriAssistantSuggestionFeaturesEnvironmentFeaturesHomeGraphStatus *homeGraph;
@property (readonly, nonatomic) char batteryIsCharging;
@property (nonatomic) char hasBatteryIsCharging;
@property (readonly, nonatomic) char isLowBatteryMode;
@property (nonatomic) char hasIsLowBatteryMode;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithFocusMode:(id)a0 deviceMotion:(id)a1 location:(int)a2 isPlayingMedia:(id)a3 isAirplaneMode:(id)a4 isTimerRunning:(id)a5 isConnectedToWifi:(id)a6 hasInternetConnection:(id)a7 isScreenSharing:(id)a8 audioIsMuted:(id)a9 screenBrightness:(id)a10 homeGraph:(id)a11 batteryIsCharging:(id)a12 isLowBatteryMode:(id)a13;

@end
