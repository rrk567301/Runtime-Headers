@class NSArray, NSString, CLRegion, DNDSUntilExitRegionStore;
@protocol DNDSBackingStore, DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate, DNDSAggregateLocationLifetimeMonitor;

@interface DNDSUntilExitLocationLifetimeMonitor : NSObject <DNDSLifetimeMonitor, CLLocationManagerDelegate, DNDSLocationSysdiagnoseContributor> {
    CLRegion *_currentRegion;
    char _regionEntered;
    char _hasActiveLifetimes;
    DNDSUntilExitRegionStore *_store;
    id<DNDSBackingStore> _backingStore;
}

@property (weak, nonatomic) id<DNDSAggregateLocationLifetimeMonitor> aggregateMonitor;
@property (readonly, nonatomic) char hasCurrentRegion;
@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
@property (weak, nonatomic) id<DNDSLifetimeMonitorDataSource> dataSource;
@property (weak, nonatomic) id<DNDSLifetimeMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)locationManager:(id)a0 didDetermineState:(long long)a1 forRegion:(id)a2;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void)_loadDataFromBackingStore;
- (void)_queue_beginMonitoringCurrentLocation;
- (void)_queue_geofenceLocation:(id)a0;
- (void)_queue_geofenceRegion:(id)a0;
- (void)_queue_refreshMonitor;
- (void)_queue_sendExpiryEventForAllLocationAssertions;
- (void)_queue_stopMonitoringCurrentLocation;
- (char)_saveDataToBackingStoreWithError:(id *)a0;
- (id)initWithAggregateMonitor:(id)a0;
- (void)refreshMonitorForDate:(id)a0;
- (id)sysdiagnoseDataRedacted:(char)a0;

@end
