@class NSData, NSString, NSArray, NSDate, NSDictionary, ELSPrivacyPolicyDescription, NSNumber, NSUserDefaults;

@interface ELSSnapshot : NSObject <NSCopying>

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long consent;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSArray *queue;
@property (nonatomic) long long retriesRemaining;
@property (retain, nonatomic) NSArray *identifiersToRetry;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSDictionary *deviceSelection;
@property (retain, nonatomic) NSNumber *uploadCompletedPercentage;
@property (retain, nonatomic) NSDictionary *followUpOptions;
@property (readonly, nonatomic) double durationRemaining;
@property (readonly, nonatomic) double totalDuration;
@property (readonly, nonatomic) BOOL needsFollowup;
@property (readonly, nonatomic) NSArray *encodedQueue;
@property (retain, nonatomic) NSArray *consentHandles;
@property (retain, nonatomic) NSArray *targetDevices;
@property (retain, nonatomic) NSData *consentData;
@property (retain, nonatomic) ELSPrivacyPolicyDescription *topLevelPrivacyPolicy;

+ (id)statusToString:(unsigned long long)a0;
+ (id)consentToString:(unsigned long long)a0;

- (void)refreshDates;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)JSONObject;
- (id)sessionDevice;
- (void)refreshKeyPaths:(id)a0;
- (id)dictionaryRepresentationPretty:(BOOL)a0;
- (void)refreshMetadata;
- (id)decodeQueue:(id)a0;
- (id)dedSessionIdentifier;
- (id)dedSessionIdentifierForRemoteDeviceIdentifier:(id)a0;
- (void)refreshConsent;
- (void)refreshConsentData;
- (void)refreshConsentHandles;
- (void)refreshDeviceSelectionMap;
- (void)refreshFollowUpOptions;
- (void)refreshIdentifiersToRetry;
- (void)refreshQueue;
- (void)refreshRetriesRemaining;
- (void)refreshSessionDevice;
- (void)refreshSessionID;
- (void)refreshStatus;
- (void)refreshTopLevelPrivacyDescription;
- (void)refreshUploadCompletedPercentage;

@end
