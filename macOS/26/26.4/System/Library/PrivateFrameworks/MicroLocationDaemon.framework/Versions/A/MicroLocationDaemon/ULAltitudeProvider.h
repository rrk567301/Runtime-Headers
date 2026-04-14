@class NSUUID, NSString, NSDate, NSNumber, NSObject;
@protocol OS_dispatch_queue, ULAltitudeSource, ULAltitudeProviderDelegate;

@interface ULAltitudeProvider : NSObject <ULAltitudeDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<ULAltitudeProviderDelegate> delegate;
@property (retain, nonatomic) id<ULAltitudeSource> altitudeSource;
@property (retain, nonatomic) NSUUID *altitudeSessionUUID;
@property (retain, nonatomic) NSNumber *referenceAltitudeMeters;
@property (retain, nonatomic) NSNumber *lastReportedAltitudeMeters;
@property (retain, nonatomic) NSNumber *currentAccuracyMeters;
@property (retain, nonatomic) NSNumber *currentPrecisionMeters;
@property (retain, nonatomic) NSDate *previousStatusUpdateDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAltitudeAvailable;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)stopBackgroundUpdates;
- (BOOL)_checkIfAltitudeExceedsThreshold:(id)a0;
- (id)_getTimestampFromState:(id)a0;
- (void)_resetReferenceAltitude;
- (void)_resetTrajectory;
- (void)didReceiveAltitudeProviderStateIsAvailable:(BOOL)a0;
- (void)didReceiveAltitudeUpdate:(id)a0 withError:(id)a1;
- (void)startBackgroundUpdates;

@end
