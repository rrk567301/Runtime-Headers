@class NSArray;

@interface HMDConfigurationLogEvent : HMMLogEvent

@property (readonly, nonatomic) unsigned long long instanceId;
@property (readonly, nonatomic) NSArray *homeConfigurations;
@property (readonly, nonatomic) unsigned long long totalHomes;
@property (readonly, nonatomic) unsigned long long totalNonEmptyHomes;
@property (readonly, nonatomic) unsigned long long totalOwnedHomes;
@property (readonly, nonatomic) unsigned long long totalResidentEnabledHomes;
@property (readonly, nonatomic) unsigned long long totalHomeCategoryBitMask;
@property (readonly, nonatomic) unsigned long long totalAppleMediaCategoryBitMask;
@property (readonly, nonatomic) unsigned long long totalThirdPartyMediaCategoryBitMask;
@property (readonly, nonatomic) long long totalUsers;
@property (readonly, nonatomic) long long totalAdminUsers;
@property (readonly, nonatomic) long long totalRestrictedGuests;
@property (readonly, nonatomic) unsigned long long totalUserPrivilegeBitMask;
@property (readonly, nonatomic) unsigned long long currentUserPrivilegeBitMask;
@property (readonly, nonatomic) unsigned long long totalAccessories;
@property (readonly, nonatomic) unsigned long long totalCertifiedAccessories;
@property (readonly, nonatomic) unsigned long long totalSmartHomeAccessories;
@property (readonly, nonatomic) unsigned long long totalHAPAccessories;
@property (readonly, nonatomic) unsigned long long totalHAPIPAccessories;
@property (readonly, nonatomic) unsigned long long totalHAPBTAccessories;
@property (readonly, nonatomic) unsigned long long totalCHIPAccessories;
@property (readonly, nonatomic) unsigned long long totalThreadAccessories;
@property (readonly, nonatomic) unsigned long long totalBridgedAccessories;
@property (readonly, nonatomic) unsigned long long totalWOBLEAccessories;
@property (readonly, nonatomic) unsigned long long totalWOLANAccessories;
@property (readonly, nonatomic) unsigned long long totalTelevisionServiceAccessories;
@property (readonly, nonatomic) unsigned long long totalCameraAccessories;
@property (readonly, nonatomic) unsigned long long totalCameraAccessoriesRecordingEnabled;
@property (readonly, nonatomic) unsigned long long totalAppleMediaAccessories;
@property (readonly, nonatomic) unsigned long long totalAppleAudioAccessories;
@property (readonly, nonatomic) unsigned long long totalAppleTVAccessories;
@property (readonly, nonatomic) unsigned long long totalThirdPartyMediaAccessories;
@property (readonly, nonatomic) unsigned long long totalWholeHouseAudioAccessories;
@property (readonly, nonatomic) unsigned long long totalHAPSpeakerAccessories;
@property (readonly, nonatomic) unsigned long long totalEnabledResidents;
@property (readonly, nonatomic) unsigned long long totalScenes;
@property (readonly, nonatomic) unsigned long long totalTriggers;
@property (readonly, nonatomic) unsigned long long totalActiveTriggers;
@property (readonly) long long totalWidgets;
@property (readonly, nonatomic) unsigned int databaseSize;
@property (readonly, nonatomic) unsigned int metadataVersion;
@property (readonly, nonatomic) char isResidentCapable;
@property (readonly, nonatomic) char isResidentEnabled;
@property (readonly, nonatomic) char isPrimaryResidentForSomeHome;
@property (readonly, nonatomic) char isResidentFirstEnabledAnyHome;
@property (readonly, nonatomic) char isResidentElectionV2EnabledAnyHome;
@property (readonly, nonatomic) unsigned long long totalResidentElectionBitMask;
@property (readonly, nonatomic) char isFMFDevice;
@property (readonly, nonatomic) char isTelevisionOnlyConfiguration;
@property (readonly, nonatomic) char isMediaOnlyConfiguration;
@property (readonly, nonatomic) char isResidentSelectionEnabledAnyHome;
@property (readonly, nonatomic) char isResidentSelectionModeAutoAnyHome;
@property (readonly, nonatomic) char isResidentSelectionModeCoordinationAnyHome;
@property (readonly, nonatomic) char isResidentSelectionModeManualAnyHome;
@property (readonly, nonatomic) char isStandaloneWatch;

- (void).cxx_destruct;
- (id)initWithHomeConfigurations:(id)a0 widgetDataSource:(id)a1 isFMFDevice:(char)a2 isStandaloneWatch:(char)a3;
- (id)initWithHomeManager:(id)a0 widgetDataSource:(id)a1 metadataVersion:(unsigned int)a2;
- (char)isSubmitted;

@end
