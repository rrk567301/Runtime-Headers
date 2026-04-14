@class CLLocationManager, NSString, ENRegionHistoryManager, ENRegionTestDataSource, ENRegionMonitorTelephonyDataSource, NSObject, ENRegionVisit, ENRegionMonitorCoreLocationDataSource;
@protocol OS_dispatch_queue, ENRegionMonitorDelegate;

@interface ENRegionMonitor : NSObject <CLLocationManagerDelegate, ENRegionHistoryManagerDelegate, ENRegionMonitorSourceDelegate>

@property (retain, nonatomic) ENRegionMonitorTelephonyDataSource *telephonyDataSource;
@property (retain, nonatomic) ENRegionMonitorCoreLocationDataSource *coreLocationDataSource;
@property (retain, nonatomic) ENRegionTestDataSource *testRegionDataSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *regionMonitorQueue;
@property (nonatomic) unsigned long long authorizationState;
@property (nonatomic) unsigned long long exposureNotificationAuthorizationState;
@property (nonatomic) unsigned long long significantLocationsAuthorizationState;
@property (nonatomic) unsigned long long monitoringMode;
@property (copy, nonatomic) ENRegionVisit *currentRegionVisit;
@property (retain, nonatomic) CLLocationManager *exposureNotificationLocationManager;
@property (retain, nonatomic) CLLocationManager *significantLocationsLocationManager;
@property (nonatomic) BOOL monitoringEnabled;
@property (retain, nonatomic) ENRegionHistoryManager *regionHistoryManager;
@property (weak, nonatomic) id<ENRegionMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)regionMonitorStateFromAuthorizationStatus:(int)a0;
+ (id)regionMonitorAuthorizationStateToString:(unsigned long long)a0;
+ (id)locationAuthorizationStatusToString:(int)a0;
+ (id)regionMonitorMonitoringModeToString:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_setup;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)setup;
- (void)_createLocationManager;
- (void)setConfigurationManager:(id)a0;
- (void)currentRegionVisitDidChange:(id)a0;
- (void)regionDataSource:(id)a0 updatedWithVisit:(id)a1;
- (void)updateRegionHistoryFileStatus;
- (void)_updateRegionHistoryFileStatus;
- (void)_notifyDelegateOfCurrentRegion;
- (void)updateRegionMonitorMonitoringMode:(unsigned long long)a0;
- (unsigned long long)getMonitoringMode;
- (void)enableRegionMonitor;
- (void)disableRegionMonitor;
- (void)resetRegionMonitor;
- (void)_resetRegionMonitor;
- (void)_createTestDataSource;
- (void)_createCountryDataSource;
- (void)_createSubdivisionDataSource;
- (void)_stopAllDataSources;
- (unsigned long long)getAuthorizationState;
- (void)updateAuthorizationState;
- (id)getCurrentRegionVisit;
- (void)_regionDataSource:(id)a0 updatedWithVisit:(id)a1;
- (BOOL)purgeAllRegionHistoryWithError:(id *)a0;
- (BOOL)_purgeAllRegionHistoryWithError:(id *)a0;
- (BOOL)purgeRegionsOlderThanDate:(id)a0 error:(id *)a1;
- (BOOL)_purgeRegionsOlderThanDate:(id)a0 error:(id *)a1;
- (id)_getAllRegionsWithError:(id *)a0;
- (id)getAllRegionsWithError:(id *)a0;
- (id)_getCurrentRegionVisitWithError:(id *)a0;
- (id)getCurrentRegionVisitWithError:(id *)a0;
- (id)getAllRegionVisitsWithError:(id *)a0;
- (id)_getAllRegionVisitsWithError:(id *)a0;

@end
