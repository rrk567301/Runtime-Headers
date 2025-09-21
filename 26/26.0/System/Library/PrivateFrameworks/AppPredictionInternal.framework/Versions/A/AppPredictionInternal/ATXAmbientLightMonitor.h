@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ATXAmbientLightMonitor : NSObject {
    struct __IOHIDEventSystemClient { } *_client;
    struct __IOHIDServiceClient { } *_sender;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_sampledAmbientLightValues;
    int _sampledAmbientLightValuesCurrentIndex;
    double _lastSampleTimestamp;
}

+ (id)sharedInstance;
+ (int)getAmbientLightTypeForXValue:(double)a0 YValue:(double)a1 ZValue:(double)a2;

- (void)start;
- (void)dealloc;
- (void)addSampleWithXValue:(id)a0 YValue:(id)a1 ZValue:(id)a2;
- (id)init;
- (id)getCurrentSampledValues;
- (id)initWithoutMonitoring;
- (int)getCurrentAmbientLightType;
- (void).cxx_destruct;

@end
