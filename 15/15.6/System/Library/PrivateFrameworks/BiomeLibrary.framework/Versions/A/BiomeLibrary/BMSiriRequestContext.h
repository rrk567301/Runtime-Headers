@class NSString, NSArray, NSData, BMSiriRequestContextUser, BMSiriRequestContextContentRestriction, BMSiriRequestContextMeCard;

@interface BMSiriRequestContext : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) NSString *inputOrigin;
@property (readonly, nonatomic) NSString *responseMode;
@property (readonly, nonatomic) char isEyesFree;
@property (nonatomic) char hasIsEyesFree;
@property (readonly, nonatomic) char isMultiUser;
@property (nonatomic) char hasIsMultiUser;
@property (readonly, nonatomic) char isVoiceTriggerEnabled;
@property (nonatomic) char hasIsVoiceTriggerEnabled;
@property (readonly, nonatomic) char isTextToSpeechEnabled;
@property (nonatomic) char hasIsTextToSpeechEnabled;
@property (readonly, nonatomic) char isTriggerlessFollowup;
@property (nonatomic) char hasIsTriggerlessFollowup;
@property (readonly, nonatomic) NSArray *deviceRestrictions;
@property (readonly, nonatomic) NSArray *bargeInModes;
@property (readonly, nonatomic) BMSiriRequestContextUser *identifiedUser;
@property (readonly, nonatomic) NSData *encodedLocation;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *siriLocale;
@property (readonly, nonatomic) BMSiriRequestContextContentRestriction *contentRestrictions;
@property (readonly, nonatomic) double uiScale;
@property (nonatomic) char hasUiScale;
@property (readonly, nonatomic) NSString *temperatureUnit;
@property (readonly, nonatomic) char allowUserGeneratedContent;
@property (nonatomic) char hasAllowUserGeneratedContent;
@property (readonly, nonatomic) char censorSpeech;
@property (nonatomic) char hasCensorSpeech;
@property (readonly, nonatomic) BMSiriRequestContextMeCard *meCard;
@property (readonly, nonatomic) int deviceIdiom;
@property (readonly, nonatomic) char didPSCFire;
@property (nonatomic) char hasDidPSCFire;
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
- (id)_bargeInModesJSONArray;
- (id)_deviceRestrictionsJSONArray;
- (id)initWithSessionID:(id)a0 requestID:(id)a1 inputOrigin:(id)a2 responseMode:(id)a3 isEyesFree:(id)a4 isMultiUser:(id)a5 isVoiceTriggerEnabled:(id)a6 isTextToSpeechEnabled:(id)a7 isTriggerlessFollowup:(id)a8 deviceRestrictions:(id)a9 bargeInModes:(id)a10 identifiedUser:(id)a11 encodedLocation:(id)a12 countryCode:(id)a13 siriLocale:(id)a14 contentRestrictions:(id)a15 uiScale:(id)a16 temperatureUnit:(id)a17 allowUserGeneratedContent:(id)a18 censorSpeech:(id)a19 meCard:(id)a20;
- (id)initWithSessionID:(id)a0 requestID:(id)a1 inputOrigin:(id)a2 responseMode:(id)a3 isEyesFree:(id)a4 isMultiUser:(id)a5 isVoiceTriggerEnabled:(id)a6 isTextToSpeechEnabled:(id)a7 isTriggerlessFollowup:(id)a8 deviceRestrictions:(id)a9 bargeInModes:(id)a10 identifiedUser:(id)a11 encodedLocation:(id)a12 countryCode:(id)a13 siriLocale:(id)a14 contentRestrictions:(id)a15 uiScale:(id)a16 temperatureUnit:(id)a17 allowUserGeneratedContent:(id)a18 censorSpeech:(id)a19 meCard:(id)a20 deviceIdiom:(int)a21 didPSCFire:(id)a22;

@end
