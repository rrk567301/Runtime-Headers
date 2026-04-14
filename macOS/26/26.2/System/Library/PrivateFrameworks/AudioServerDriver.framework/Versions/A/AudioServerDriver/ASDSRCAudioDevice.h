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

- (unsigned int)timestampPeriod;
- (int)performStopIO;
- (unsigned int)clockDomain;
- (int)startIOForClient:(unsigned int)a0;
- (double)samplingRate;
- (void)setDeviceName:(id)a0;
- (BOOL)clockIsStable;
- (int)stopIOForClient:(unsigned int)a0;
- (id)modelUID;
- (id)manufacturerName;
- (id)modelName;
- (id)samplingRates;
- (id /* block */)getZeroTimestampBlock;
- (unsigned int)clockAlgorithm;
- (void)ioThreadStateChange:(id)a0;
- (void)setSamplingRates:(id)a0;
- (int)teardownIsolatedIOForStream:(id)a0 useCase:(unsigned long long)a1;
- (void)setSamplingRate:(double)a0;
- (BOOL)changeSamplingRate:(double)a0;
- (unsigned int)outputSafetyOffset;
- (BOOL)canBeDefaultDevice;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 plugin:(id)a2;
- (int)setupIsolatedIOForStream:(id)a0 frameSize:(unsigned int)a1 useCase:(unsigned long long)a2;
- (BOOL)isHidden;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (BOOL)canBeDefaultOutputDevice;
- (void).cxx_destruct;
- (unsigned int)transportType;
- (id)deviceName;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)canBeDefaultInputDevice;
- (void)setSupportsIsolatedIO:(BOOL)a0;
- (double)sampleRateRatio;
- (unsigned int)inputSafetyOffset;
- (id /* block */)willDoWriteMixBlock;
- (id /* block */)willDoReadInputBlock;
- (BOOL)supportsIsolatedIO;
- (BOOL)canBeDefaultSystemDevice;

@end
