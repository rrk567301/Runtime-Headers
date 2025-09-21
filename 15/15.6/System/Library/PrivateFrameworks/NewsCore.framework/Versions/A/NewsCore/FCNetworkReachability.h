@class NSString, NSHashTable;

@interface FCNetworkReachability : NSObject <FCNetworkReachabilityType>

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) char isNetworkReachable;
@property (nonatomic) char isNetworkReachableViaWiFi;
@property (nonatomic) char isNetworkReachableViaCellular;
@property (nonatomic) char isNetworkReachableViaOther;
@property (nonatomic) char isNetworkUsageExpensive;
@property (nonatomic) char isLowDataModeEnabled;
@property (nonatomic) long long cellularRadioAccessTechnology;
@property (nonatomic) char isCloudKitAccessAllowed;
@property (nonatomic) char accessRestrictedBecauseOfAppVersion;
@property (nonatomic) char accessRestrictedBecauseOfOSVersion;
@property (nonatomic) char accessRestrictedBecauseOfCountry;
@property (nonatomic) char accessRestrictedBecauseOfDeviceAbandoned;
@property (readonly, nonatomic) char isNetworkOnlyReachableViaCellular;
@property (readonly, nonatomic) long long reachabilityStatus;
@property (readonly, nonatomic) char isCloudKitReachable;
@property (readonly, nonatomic) char isNetworkUsageInexpensive;
@property (readonly, nonatomic) long long offlineReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedNetworkReachability;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_reachabilityChanged:(id)a0;
- (void)_updateReachability;
- (void)_accessRestrictionsChanged;
- (long long)_cellularRadioAccessTechnology;
- (long long)_cellularRadioAccessTechnologyFromString:(id)a0;

@end
