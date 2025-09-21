@class NSError, _TtC19MicroLocationDaemon21VisualMappingOdometry;

@interface ULAudioOdometryProvider : SwiftNativeNSObject <ULAudioOdometryProviding> {
    void /* unknown type, empty encoding */ audioAccessoryManager;
    void /* unknown type, empty encoding */ odometryTask;
    void /* unknown type, empty encoding */ odometryHandler;
    void /* unknown type, empty encoding */ callerQueue;
}

- (id)initWithQueue:(id)a0;
- (id)init;
- (void)stopWithCompletionHandler:(void (^)(void))a0;
- (void)startWithUpdateInterval:(double)a0 handler:(void (^)(_TtC19MicroLocationDaemon21VisualMappingOdometry *, NSError *))a1 completionHandler:(void (^)(NSError *))a2;

@end
