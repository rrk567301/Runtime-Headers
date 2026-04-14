@class NSArray, CBPacketLoggerClient, CBDevice, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CBHIDPerformanceMonitor : NSObject <CBActivatable> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _finishWait;
    struct IOHIDDeviceInterface **_hidInterface;
    BOOL _hidOpen;
    struct IOCFPlugInInterfaceStruct **_hidPluginInterface;
    unsigned int _hidProductID;
    unsigned int _hidService;
    BOOL _hidStartedErrorRateMode;
    CBPacketLoggerClient *_packetLoggerClient;
    CBDevice *_targetDevice;
    unsigned long long _targetDeviceIndex;
    NSArray *_targetDevices;
    double _testSecondsActual;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    char _statsLastRSSI;
    unsigned long long _statsPacketMicsStart;
    unsigned long long _statsPacketMicsEnd;
    unsigned long long _statsPacketMicsPrevious;
    unsigned long long _statsPacketCountActual;
    unsigned long long _statsPacketCountExpected;
    unsigned long long _statsPacketIntervalMicsExpected;
    unsigned long long _statsPacketIntervalMicsMax;
}

@property (copy, nonatomic) NSArray *devices;
@property (copy, nonatomic) id /* block */ excessiveIntervalHandler;
@property (nonatomic) double intervalMs;
@property (copy, nonatomic) id /* block */ summaryHandler;
@property (nonatomic) double testSeconds;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_packetLoggerStop;
- (void)_hidStop;
- (BOOL)_findDevicesAndReturnError:(id *)a0;
- (void)_packetLoggerStart;
- (void)_testStart;
- (void)_rssiRead;
- (BOOL)_hidStartAndReturnError:(id *)a0;
- (void)_timerStart;
- (BOOL)_hidStopPERAndRetunError:(id *)a0;
- (void)_testEnded;
- (BOOL)_hidStartPERAndRetunError:(id *)a0;
- (BOOL)_hidSetFeatureWithReportID:(unsigned char)a0 value:(unsigned char)a1 error:(id *)a2;
- (void)_packetLoggerProcessPacketData:(id)a0;
- (void)_testEnd;

@end
