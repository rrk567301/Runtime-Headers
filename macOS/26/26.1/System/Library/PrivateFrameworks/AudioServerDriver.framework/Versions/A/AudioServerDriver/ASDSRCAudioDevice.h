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

- (void)setDeviceName:(id)a0;
- (id)modelName;
- (unsigned int)timestampPeriod;
- (id)modelUID;
- (id)manufacturerName;
- (double)samplingRate;
- (int)stopIOForClient:(unsigned int)a0;
- (id /* block */)getZeroTimestampBlock;
- (int)performStopIO;
- (void)setSamplingRate:(double)a0;
- (void)setSamplingRates:(id)a0;
- (unsigned int)clockAlgorithm;
- (int)startIOForClient:(unsigned int)a0;
- (void)ioThreadStateChange:(id)a0;
- (id)deviceName;
- (unsigned int)clockDomain;
- (id)samplingRates;
- (BOOL)isHidden;
- (void)setSupportsIsolatedIO:(BOOL)a0;
- (unsigned int)transportType;
- (BOOL)canBeDefaultSystemDevice;
- (unsigned int)inputSafetyOffset;
- (BOOL)canBeDefaultDevice;
- (BOOL)canBeDefaultInputDevice;
- (double)sampleRateRatio;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (BOOL)canBeDefaultOutputDevice;
- (void).cxx_destruct;
- (BOOL)supportsIsolatedIO;
- (id /* block */)willDoWriteMixBlock;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 plugin:(id)a2;
- (int)setupIsolatedIOForStream:(id)a0 frameSize:(unsigned int)a1 useCase:(unsigned long long)a2;
- (unsigned int)outputSafetyOffset;
- (id /* block */)willDoReadInputBlock;
- (int)teardownIsolatedIOForStream:(id)a0 useCase:(unsigned long long)a1;
- (BOOL)changeSamplingRate:(double)a0;
- (BOOL)clockIsStable;

@end
