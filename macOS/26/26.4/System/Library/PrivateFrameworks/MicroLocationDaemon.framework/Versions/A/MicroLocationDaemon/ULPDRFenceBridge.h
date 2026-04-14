@class NSString, ULOdometryMonitor, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface ULPDRFenceBridge : NSObject

@property (retain, nonatomic) ULOdometryMonitor *odometryMonitor;
@property (retain, nonatomic) NSString *fenceName;
@property (nonatomic) BOOL isFenceActive;
@property (nonatomic) BOOL isSessionStarted;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSNumber *radius;
@property (nonatomic) long long sourceType;
@property (nonatomic) float radiusSquare;
@property (nonatomic) float positionX;
@property (nonatomic) float positionY;
@property (copy, nonatomic) id /* block */ onMotionMeasurements;
@property (copy, nonatomic) id /* block */ onErrorIndication;

- (void).cxx_destruct;
- (void)endSession;
- (void)setFenceRadius:(id)a0;
- (void)startSession;
- (void)clearFence;
- (void)handleOdometryStatus:(id)a0 withError:(id)a1;
- (void)handleFenceCrossWithError:(id)a0;
- (id)initWithFenceIdentifier:(id)a0 odometryMonitor:(id)a1 sourceType:(long long)a2 queue:(id)a3 radiusInMeters:(id)a4 callback:(id /* block */)a5 errorCallback:(id /* block */)a6;
- (void)setFence;
- (void)startMonitoringCMOdometry;
- (void)startMonitoringNPDR;

@end
