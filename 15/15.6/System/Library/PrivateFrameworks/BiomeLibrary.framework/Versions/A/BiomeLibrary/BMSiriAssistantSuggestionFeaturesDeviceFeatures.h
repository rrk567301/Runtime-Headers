@class NSString;

@interface BMSiriAssistantSuggestionFeaturesDeviceFeatures : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) char connectedToAirpods;
@property (nonatomic) char hasConnectedToAirpods;
@property (readonly, nonatomic) NSString *noiseCancellingMode;
@property (readonly, nonatomic) NSString *connectedToDevice;
@property (readonly, nonatomic) char isInCarPlay;
@property (nonatomic) char hasIsInCarPlay;
@property (readonly, nonatomic) char hasWatch;
@property (nonatomic) char hasHasWatch;
@property (readonly, nonatomic) char hasIPad;
@property (nonatomic) char hasHasIPad;
@property (readonly, nonatomic) char hasHomePod;
@property (nonatomic) char hasHasHomePod;
@property (readonly, nonatomic) char hasAppleTV;
@property (nonatomic) char hasHasAppleTV;
@property (readonly, nonatomic) char hasIPhone;
@property (nonatomic) char hasHasIPhone;
@property (readonly, nonatomic) int totalNumDevices;
@property (nonatomic) char hasTotalNumDevices;
@property (readonly, nonatomic) NSString *currentDeviceType;
@property (readonly, nonatomic) NSString *currentBuildVersion;
@property (readonly, nonatomic) NSString *distanceFromLatestBuild;
@property (readonly, nonatomic) char isALargeFormatPhone;
@property (nonatomic) char hasIsALargeFormatPhone;
@property (readonly, nonatomic) char hasAPasscode;
@property (nonatomic) char hasHasAPasscode;
@property (readonly, nonatomic) char supportsSMSMEssaging;
@property (nonatomic) char hasSupportsSMSMEssaging;
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
- (id)initWithConnectedToAirpods:(id)a0 noiseCancellingMode:(id)a1 connectedToDevice:(id)a2 isInCarPlay:(id)a3 hasWatch:(id)a4 hasIPad:(id)a5 hasHomePod:(id)a6 hasAppleTV:(id)a7 hasIPhone:(id)a8 totalNumDevices:(id)a9 currentDeviceType:(id)a10 currentBuildVersion:(id)a11 distanceFromLatestBuild:(id)a12 isALargeFormatPhone:(id)a13 hasAPasscode:(id)a14 supportsSMSMEssaging:(id)a15;

@end
