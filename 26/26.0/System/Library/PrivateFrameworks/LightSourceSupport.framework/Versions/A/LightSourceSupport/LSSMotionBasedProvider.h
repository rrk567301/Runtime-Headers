@class NSString, LSSQuaternionSmoothFilter, NSOperationQueue, CMMotionManager, NSObject, LSSRotationAccumulator, LSSSettings, LSSMotionBasedLightSource;
@protocol OS_dispatch_queue, LSSProviderDelegate;

@interface LSSMotionBasedProvider : NSObject <LSSProviderDelegate, LSSProvider> {
    NSOperationQueue *_operationQueue;
    CMMotionManager *_motionManager;
    LSSMotionBasedLightSource *_lightSource;
    LSSQuaternionSmoothFilter *_referenceOrientation;
    LSSRotationAccumulator *_motionAccumulator;
    unsigned long long _frameCount;
    unsigned long long _resumeFrame;
    LSSSettings *_settings;
    BOOL _paused;
    BOOL _lightInMotion;
    BOOL _inMotion;
}

@property (weak, nonatomic) id<LSSProviderDelegate> delegate;
@property (nonatomic) long long features;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)invalidate;
- (double)updateInterval;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)_update:(struct { })a0 timestamp:(double)a1;
- (void)provider:(id)a0 updatedLight:(struct { double x0; double x1; struct { } x2; BOOL x3; })a1;

@end
