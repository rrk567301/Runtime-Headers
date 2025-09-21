@class NSOperationQueue;

@interface CMAudioAccessoryManagerInternal : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fSampleLock;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryAccelerometerDispatcher;
    double fAudioAccessoryAccelerometerUpdateInterval;
    id /* block */ fAudioAccessoryAccelerometerHandler;
    NSOperationQueue *fAudioAccessoryAccelerometerQueue;
    struct Sample { double timestamp; struct { float x; float y; float z; } acceleration; unsigned long long sensorTime; unsigned short sequenceNumber; } fLatestAudioAccessoryAccelerometerSample;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryGyroDispatcher;
    double fAudioAccessoryGyroUpdateInterval;
    id /* block */ fAudioAccessoryGyroHandler;
    NSOperationQueue *fAudioAccessoryGyroQueue;
    struct Sample { double timestamp; struct { float x; float y; float z; } gyro; unsigned long long sensorTime; unsigned short sequenceNumber; float temperature; } fLatestAudioAccessoryGyroSample;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryMagnetometerDispatcher;
    double fAudioAccessoryMagnetometerUpdateInterval;
    id /* block */ fAudioAccessoryMagnetometerHandler;
    NSOperationQueue *fAudioAccessoryMagnetometerQueue;
    struct Sample { double timestamp; struct { float x; float y; float z; } magneticField; unsigned long long sensorTime; unsigned short sequenceNumber; float temperature; } fLatestAudioAccessoryMagnetometerSample;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryDeviceMotionDispatcher;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryDeviceMotionConfigDispatcher;
    double fAudioAccessoryDeviceMotionUpdateInterval;
    id /* block */ fAudioAccessoryDeviceMotionHandler;
    NSOperationQueue *fAudioAccessoryDeviceMotionQueue;
    struct CMOQuaternion { float elements[4]; } fFrameRotation;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryDeviceMotionStatusDispatcher;
    id /* block */ fAudioAccessoryDeviceMotionStatusHandler;
    NSOperationQueue *fAudioAccessoryDeviceMotionStatusQueue;
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> { struct Dispatcher *__ptr_; } fAudioAccessoryActivityDispatcher;
    double fAudioAccessoryActivityUpdateInterval;
    id /* block */ fAudioAccessoryActivityHandler;
    NSOperationQueue *fAudioAccessoryActivityQueue;
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> { struct Dispatcher *__ptr_; } fAudioAccessoryActivityStatusDispatcher;
    id /* block */ fAudioAccessoryActivityStatusHandler;
    NSOperationQueue *fAudioAccessoryActivityStatusQueue;
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> { struct Dispatcher *__ptr_; } fAudioAccessorySitStandDispatcher;
    double fAudioAccessorySitStandUpdateInterval;
    id /* block */ fAudioAccessorySitStandHandler;
    NSOperationQueue *fAudioAccessorySitStandQueue;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryHeartRateDispatcher;
    double fAudioAccessoryHeartRateUpdateInterval;
    id /* block */ fAudioAccessoryHeartRateHandler;
    NSOperationQueue *fAudioAccessoryHeartRateQueue;
    struct Sample { double timestamp; unsigned int heartRate; float confidence; unsigned long long sensorTime; unsigned int sequenceNumber; } fLatestAudioAccessoryHeartRateSample;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryInertialOdometryDispatcher;
    double fAudioAccessoryInertialOdometryUpdateInterval;
    id /* block */ fAudioAccessoryInertialOdometryHandler;
    NSOperationQueue *fAudioAccessoryInertialOdometryQueue;
    struct InertialOdometryReport { unsigned long long timestamp; float position[3]; float deltaVelocityCumSum[3]; unsigned long long timestampPositionRollOver; unsigned long long timestampVelocityRollOver; unsigned long long timestampDeltaPositionUnavailable[3]; unsigned long long timestampUninitialized; float attitude[4]; float rotationArbitraryToMagneticNorth; unsigned char displacingState; double timestampSecs; } fLatestAudioAccessoryInertialOdometrySample;
    struct Dispatcher { void /* function */ **x0; id x1; } *fAudioAccessoryPPGDispatcher;
    id /* block */ fAudioAccessoryPPGHandler;
    NSOperationQueue *fAudioAccessoryPPGQueue;
    struct Sample { double timestamp; unsigned long long sensorTime; unsigned char frameNum; unsigned char error; unsigned char dark0[3]; unsigned char light0[3]; unsigned char dark1[3]; unsigned char dark2[3]; unsigned char light1[3]; unsigned char dark3[3]; unsigned char rxGain[2]; unsigned char ledCurrent[2]; } fLatestAudioAccessoryPPGSample;
    BOOL fAudioAccessoryAccelerometerAvailable;
    BOOL fAudioAccessoryGyroAvailable;
    BOOL fAudioAccessoryMagnetometerAvailable;
    BOOL fAudioAccessoryDeviceMotionAvailable;
    BOOL fAudioAccessoryActivityAvailable;
    BOOL fAudioAccessorySitStandAvailable;
    BOOL fAudioAccessoryHeartRateAvailable;
    BOOL fAudioAccessoryInertialOdometryAvailable;
    BOOL fAudioAccessoryPPGAvailable;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
