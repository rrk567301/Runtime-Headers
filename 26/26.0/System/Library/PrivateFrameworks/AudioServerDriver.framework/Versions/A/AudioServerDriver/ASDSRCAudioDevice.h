@class NSString, NSArray, NSObject, ASDAudioDevice;
@protocol OS_dispatch_queue;

@interface ASDSRCAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {
    double _samplingRate;
    NSArray *_samplingRates;
    NSObject<OS_dispatch_queue> *_sampleRateQueue;
    struct { unsigned char valid; double sampleTime; unsigned long long hostTime; unsigned long long seed; } _lastTimestamp;
}

@property (readonly, nonatomic) ASDAudioDevice *underlyingDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)getZeroTimestampBlock;
- (id)modelName;
- (unsigned int)timestampPeriod;
- (void)setSamplingRates:(id)a0;
- (BOOL)clockIsStable;
- (id)manufacturerName;
- (int)stopIOForClient:(unsigned int)a0;
- (void)ioThreadStateChange:(id)a0;
- (int)performStopIO;
- (id)modelUID;
- (int)startIOForClient:(unsigned int)a0;
- (id)samplingRates;
- (unsigned int)clockDomain;
- (unsigned int)clockAlgorithm;
- (void)setDeviceName:(id)a0;
- (BOOL)supportsIsolatedIO;
- (id)deviceName;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 plugin:(id)a2;
- (id /* block */)willDoReadInputBlock;
- (BOOL)changeSamplingRate:(double)a0;
- (double)samplingRate;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (unsigned int)inputSafetyOffset;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (id /* block */)willDoWriteMixBlock;
- (int)teardownIsolatedIOForStream:(id)a0 useCase:(unsigned long long)a1;
- (int)setupIsolatedIOForStream:(id)a0 frameSize:(unsigned int)a1 useCase:(unsigned long long)a2;
- (BOOL)canBeDefaultInputDevice;
- (BOOL)canBeDefaultOutputDevice;
- (void)setSupportsIsolatedIO:(BOOL)a0;
- (unsigned int)transportType;
- (BOOL)canBeDefaultDevice;
- (unsigned int)outputSafetyOffset;
- (void)setSamplingRate:(double)a0;
- (double)sampleRateRatio;
- (BOOL)isHidden;
- (BOOL)canBeDefaultSystemDevice;
- (void).cxx_destruct;

@end
