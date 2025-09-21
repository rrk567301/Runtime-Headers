@class NSArray, NSString, CBPacketLoggerClient, CBDevice, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CBHIDPerformanceMonitor : NSObject <CBActivatable> {
    char _activateCalled;
    char _invalidateCalled;
    char _invalidateDone;
    char _finishWait;
    struct IOHIDDeviceInterface **_hidInterface;
    struct __IOHIDManager { } *_hidManager;
    char _hidOpen;
    struct IOCFPlugInInterfaceStruct **_hidPluginInterface;
    unsigned int _hidProductID;
    unsigned int _hidService;
    char _hidStartedErrorRateMode;
    CBPacketLoggerClient *_packetLoggerClient;
    char _startWait;
    CBDevice *_targetDevice;
    NSString *_targetBTAddrData;
    NSString *_targetBTAddrKey;
    unsigned long long _targetDeviceIndex;
    NSArray *_targetDevices;
    double _testSecondsActual;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    char _statsLastRSSI;
    unsigned short _statsLastConnectionHandle;
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
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_packetLoggerProcessPacketData:(id)a0;
- (char)_findDevicesAndReturnError:(id *)a0;
- (char)_hidSetFeatureWithReportID:(unsigned char)a0 value:(unsigned char)a1 error:(id *)a2;
- (char)_hidStartAndReturnError:(id *)a0;
- (char)_hidStartPERAndRetunError:(id *)a0;
- (void)_hidStop;
- (char)_hidStopPERAndRetunError:(id *)a0;
- (char)_isAppleOldHIDs:(unsigned int)a0;
- (char)_isMac;
- (void)_packetLoggerStart;
- (void)_packetLoggerStop;
- (void)_rssiAndHandleRead;
- (void)_testEnd;
- (void)_testEnded;
- (void)_testStart;
- (void)_timerStart;

@end
