@class NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface VCTestMonitorManager : NSObject {
    NSNumber *_initialMemoryUsage;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
}

@property char toneInjectionEnabled;
@property char forceNetworkCellular;
@property (nonatomic) char enableLoopbackInterface;
@property (nonatomic) char enableAudioPowerSpectrumReport;
@property (nonatomic) double emulatedRxPLR;
@property (nonatomic) int forcedTargetBitrate;
@property (nonatomic) int forcedCapBitrate;
@property (retain, nonatomic) NSString *emulatedNetworkConfigPath;
@property (nonatomic) char enableOneToOneMode;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)registerBlocksForService;
- (void)reportSessionMediaDaemonStats:(id)a0;

@end
