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

+ (id)regionMonitorMonitoringModeToString:(unsigned long long)a0;
+ (id)regionMonitorAuthorizationStateToString:(unsigned long long)a0;
+ (id)locationAuthorizationStatusToString:(int)a0;
+ (unsigned long long)regionMonitorStateFromAuthorizationStatus:(int)a0;

- (void)setConfigurationManager:(id)a0;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)getCurrentRegionVisit;
- (BOOL)purgeAllRegionHistoryWithError:(id *)a0;
- (void)_updateRegionHistoryFileStatus;
- (unsigned long long)getMonitoringMode;
- (id)getAllRegionVisitsWithError:(id *)a0;
- (void)_createTestDataSource;
- (void)resetRegionMonitor;
- (void)updateRegionMonitorMonitoringMode:(unsigned long long)a0;
- (id)_getCurrentRegionVisitWithError:(id *)a0;
- (id)init;
- (id)_getAllRegionVisitsWithError:(id *)a0;
- (void)_stopAllDataSources;
- (void)setup;
- (BOOL)purgeRegionsOlderThanDate:(id)a0 error:(id *)a1;
- (void)_createLocationManager;
- (id)_getAllRegionsWithError:(id *)a0;
- (BOOL)_purgeAllRegionHistoryWithError:(id *)a0;
- (id)getAllRegionsWithError:(id *)a0;
- (void)disableRegionMonitor;
- (void)_setup;
- (void)_createSubdivisionDataSource;
- (void)regionDataSource:(id)a0 updatedWithVisit:(id)a1;
- (void).cxx_destruct;
- (void)enableRegionMonitor;
- (id)getCurrentRegionVisitWithError:(id *)a0;
- (BOOL)_purgeRegionsOlderThanDate:(id)a0 error:(id *)a1;
- (void)currentRegionVisitDidChange:(id)a0;
- (unsigned long long)getAuthorizationState;
- (void)_createCountryDataSource;
- (void)_regionDataSource:(id)a0 updatedWithVisit:(id)a1;
- (void)updateAuthorizationState;
- (void)_notifyDelegateOfCurrentRegion;
- (void)updateRegionHistoryFileStatus;
- (void)_resetRegionMonitor;

@end
