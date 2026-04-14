@class NSString, CMOdometryManager, NSObject;
@protocol OS_dispatch_queue, ULOdometryDelegate;

@interface ULOdometryBridge : NSObject <ULOdometrySource>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<ULOdometryDelegate> delegate;
@property (retain, nonatomic) CMOdometryManager *odometryManager;
@property (nonatomic) BOOL backgroudUpdatesRunning;
@property (readonly, nonatomic) long long odometrySourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)referenceFrame;
+ (BOOL)isBackgroundAvailable;
+ (BOOL)isNeuralPDRAvailable;
+ (BOOL)enableNeuralPDR;
+ (id)getNorthAlignmentAngleRadFrom:(id)a0;
+ (id)northAlignmentErrorFrom:(id)a0;

- (void).cxx_destruct;
- (void)stopBackgroundUpdates;
- (id)initWithDelegateQueue:(id)a0 delegate:(id)a1;
- (void)handleOdometryMeasurement:(id)a0 error:(id)a1;
- (void)startBackgroundUpdates;

@end
