@class NSString, NSArray, NSURL, NSObject, MADMarker;
@protocol OS_os_transaction;

@interface MADAutoAssetConnectorParam : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *paramSafeSummary;
@property (readonly, nonatomic) long long paramType;
@property (retain, nonatomic) NSArray *monitorMarkers;
@property (retain, nonatomic) NSArray *markersNoRetry;
@property (retain, nonatomic) NSArray *markersRequiringRetry;
@property (retain, nonatomic) MADMarker *finishedMarker;
@property (nonatomic) BOOL potentialNetworkFailure;
@property (retain, nonatomic) NSURL *observedNetworkPath;
@property (retain, nonatomic) NSObject<OS_os_transaction> *eventOSTransaction;

- (id)initWithSafeSummary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (void)updateSafeSummary;
- (id)initWithCoder:(id)a0;
- (id)_newSummary;
- (id)initWithMonitorMarkers:(id)a0 withMarkersNoRetry:(id)a1 withMarkersRequiringRetry:(id)a2 withEventOSTransaction:(id)a3;
- (id)initWithObservedNetworkPath:(id)a0;
- (id)initWithParamType:(long long)a0 withSafeSummary:(id)a1 withMonitorMarkers:(id)a2 withMarkersNoRetry:(id)a3 withMarkersRequiringRetry:(id)a4 withFinishedMarker:(id)a5 withEventOSTransaction:(id)a6 withPotentialNetworkFailure:(BOOL)a7 withObservedNetworkPath:(id)a8;
- (id)initWithScheduledMarkerFinished:(id)a0 withPotentialNetworkFailure:(BOOL)a1;

@end
