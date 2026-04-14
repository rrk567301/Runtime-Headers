@class NSData, NSObject;
@protocol GEOPListStateCapturing, OS_dispatch_queue;

@interface geo_state_capture_handle : NSObject {
    id<GEOPListStateCapturing> _weakStateCapturing;
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_description;
    unsigned long long _stateCaptureHandle;
    unsigned int _frequency;
    double _lastCaptureTime;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
