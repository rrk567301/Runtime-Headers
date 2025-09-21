@class NSString, NSArray, BMTrialIdentifiers, BMFeatureDouble;

@interface BMShareEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) BMTrialIdentifiers *trialIdentifiers;
@property (readonly, nonatomic) int version;
@property (nonatomic) BOOL hasVersion;
@property (readonly, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) NSString *testKey;
@property (readonly, nonatomic) int madResponseStatus;
@property (readonly, nonatomic) BOOL isFallbackFetch;
@property (nonatomic) BOOL hasIsFallbackFetch;
@property (readonly, nonatomic) BOOL isSharePlayAvailable;
@property (nonatomic) BOOL hasIsSharePlayAvailable;
@property (readonly, nonatomic) int appSharedFrom;
@property (readonly, nonatomic) NSArray *feedbackEvents;
@property (readonly, nonatomic) NSArray *typeOfContent;
@property (readonly, nonatomic) BOOL isInPhoneCall;
@property (nonatomic) BOOL hasIsInPhoneCall;
@property (readonly, nonatomic) BMFeatureDouble *timeSinceLastShare;
@property (readonly, nonatomic) BOOL isScreenShot;
@property (nonatomic) BOOL hasIsScreenShot;
@property (readonly, nonatomic) NSArray *photoFeatures;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_candidatesJSONArray;
- (id)_feedbackEventsJSONArray;
- (id)_photoFeaturesJSONArray;
- (id)_typeOfContentJSONArray;
- (id)initWithDeviceIdentifier:(id)a0 sessionId:(id)a1 trialIdentifiers:(id)a2 version:(id)a3 candidates:(id)a4 testKey:(id)a5 madResponseStatus:(int)a6 isFallbackFetch:(id)a7 isSharePlayAvailable:(id)a8 appSharedFrom:(int)a9 feedbackEvents:(id)a10 typeOfContent:(id)a11 isInPhoneCall:(id)a12 timeSinceLastShare:(id)a13 isScreenShot:(id)a14 photoFeatures:(id)a15;

@end
