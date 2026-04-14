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
    BOOL _motionIsLow;
}

@property (weak, nonatomic) id<LSSProviderDelegate> delegate;
@property (nonatomic) long long features;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (double)updateInterval;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)_update:(struct { })a0 timestamp:(double)a1;
- (void)provider:(id)a0 updatedLight:(struct { double x0; struct { } x1; float x2; unsigned int x3; })a1;

@end
