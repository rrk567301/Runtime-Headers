@class NSString, NSUUID, NSMutableSet, NSObject, RTCReporting;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureMetricsReporter : NSObject {
    unsigned int _sessionID;
    NSObject<OS_dispatch_queue> *_queue;
    RTCReporting *_rtcReporting;
    NSMutableSet *_latencyMetricsSet;
}

@property (retain, nonatomic) NSString *remoteDeviceOSVersion;
@property (retain, nonatomic) NSString *remoteDeviceModel;
@property (nonatomic) BOOL isUSB;
@property (retain, nonatomic) NSUUID *sessionUUID;

+ (void)initialize;

- (void).cxx_destruct;
- (id)init;
- (void)_addLatencyMetrics:(id)a0;
- (void)_clearAndSubmitAllMetrics;
- (void)_submitMetricsToRTCReporting:(id)a0;
- (void)addLatencyMetrics:(id)a0;
- (void)clearAndSubmitAllMetrics;

@end
