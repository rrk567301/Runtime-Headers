@class MKFCKHome, NSSet, NSArray, NSData, NSString, NSNumber, NSDictionary;

@interface MKFCKHAPAccessory : MKFCKAccessory

@property (nonatomic) char airPlayEnabled;
@property (nonatomic) char announceEnabled;
@property (copy, nonatomic) NSNumber *cameraAccessModeAtHome;
@property (copy, nonatomic) NSNumber *cameraAccessModeNotAtHome;
@property (retain, nonatomic) NSSet *cameraActivityZones;
@property (nonatomic) char cameraActivityZonesIncludedForSignificantEventDetection;
@property (nonatomic) long long cameraRecordingEventTriggers;
@property (copy, nonatomic) NSNumber *category;
@property (copy, nonatomic) NSNumber *certificationStatus;
@property (nonatomic) char doorbellChimeEnabled;
@property (nonatomic) char hasDismissedHomePodHasNonMemberMediaAccountWarning;
@property (nonatomic) char hasOnboardedForNaturalLighting;
@property (retain, nonatomic) NSArray *initialServiceTypes;
@property (nonatomic) char interactionHoldDurationEnabled;
@property (nonatomic) long long interactionHoldDurationSeconds;
@property (nonatomic) char interactionIgnoreRepeatEnabled;
@property (nonatomic) long long interactionIgnoreRepeatSeconds;
@property (nonatomic) char interactionTouchAccommodationsEnabled;
@property (nonatomic) char lightWhenUsingSiriEnabled;
@property (retain, nonatomic) NSData *matCredRGSI;
@property (copy, nonatomic) NSString *matterExtendedMACAddress;
@property (nonatomic) long long matterNodeID;
@property (nonatomic) long long matterProductID;
@property (nonatomic) long long matterVendorID;
@property (nonatomic) long long matterWEDSupport;
@property (nonatomic) long long needsOnboarding;
@property (retain, nonatomic) NSData *preexistingMatCredGRK;
@property (retain, nonatomic) NSData *preexistingMatCredRGI;
@property (retain, nonatomic) NSData *preexistingMatCredRPK;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSDictionary *serviceApplicationData;
@property (retain, nonatomic) NSDictionary *serviceAssociatedServiceTypes;
@property (retain, nonatomic) NSDictionary *serviceConfiguredNames;
@property (retain, nonatomic) NSDictionary *serviceProperties;
@property (nonatomic) char shareSiriAnalytics;
@property (nonatomic) char shareSpeakerAnalytics;
@property (nonatomic) char siriEnabled;
@property (nonatomic) char siriEndpointEnabled;
@property (copy, nonatomic) NSString *siriLanguageCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceGenderCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceName;
@property (nonatomic) char soundAlertEnabled;
@property (copy, nonatomic) NSNumber *supportedLinkLayerTypes;
@property (nonatomic) char supportsNativeMatter;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) long long visionDoubleTapSettingsTimeoutInterval;
@property (nonatomic) long long visionSpeakingRate;
@property (nonatomic) char visionVoiceOverAudioDuckingEnabled;
@property (nonatomic) char visionVoiceOverEnabled;
@property (retain, nonatomic) MKFCKHome *activeNetworkRouterInHome;

+ (id)fetchRequest;
+ (id)fetchWithLocalModel:(id)a0 context:(id)a1;

- (char)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (id)fetchLocalModelWithContext:(id)a0;
- (char)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
