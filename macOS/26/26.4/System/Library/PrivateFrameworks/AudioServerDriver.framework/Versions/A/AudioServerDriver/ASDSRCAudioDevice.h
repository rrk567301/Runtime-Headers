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

- (id)modelName;
- (unsigned int)timestampPeriod;
- (int)stopIOForClient:(unsigned int)a0;
- (void)setSamplingRate:(double)a0;
- (BOOL)canBeDefaultInputDevice;
- (id)modelUID;
- (void)ioThreadStateChange:(id)a0;
- (unsigned int)transportType;
- (double)samplingRate;
- (id /* block */)getZeroTimestampBlock;
- (void)setSamplingRates:(id)a0;
- (unsigned int)isolatedOutputLatency;
- (int)performStopIO;
- (unsigned int)clockAlgorithm;
- (void)setDeviceName:(id)a0;
- (unsigned int)clockDomain;
- (BOOL)clockIsStable;
- (int)startIOForClient:(unsigned int)a0;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (id)deviceName;
- (id)manufacturerName;
- (id)samplingRates;
- (unsigned int)isolatedInputSafetyOffset;
- (int)setupIsolatedIOForStream:(id)a0 frameSize:(unsigned int)a1 useCase:(unsigned long long)a2;
- (BOOL)changeSamplingRate:(double)a0;
- (unsigned int)isolatedOutputSafetyOffset;
- (unsigned int)isolatedTimestampPeriod;
- (id /* block */)willDoReadInputBlock;
- (void)setIsolatedOutputSafetyOffset:(unsigned int)a0;
- (BOOL)canBeDefaultOutputDevice;
- (BOOL)isHidden;
- (BOOL)canBeDefaultSystemDevice;
- (id)serialNumber;
- (id /* block */)willDoWriteMixBlock;
- (void).cxx_destruct;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 plugin:(id)a2;
- (unsigned int)isolatedInputLatency;
- (double)sampleRateRatio;
- (int)teardownIsolatedIOForStream:(id)a0 useCase:(unsigned long long)a1;
- (void)setIsolatedInputSafetyOffset:(unsigned int)a0;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (void)setSupportsIsolatedIO:(BOOL)a0;
- (unsigned int)outputSafetyOffset;
- (BOOL)supportsIsolatedIO;
- (double)isolatedSamplingRate;
- (unsigned int)inputSafetyOffset;
- (id /* block */)getIsolatedZeroTimeStampBlock;
- (BOOL)canBeDefaultDevice;
- (void)setIsolatedSamplingRate:(double)a0;
- (void)setIsolatedTimestampPeriod:(unsigned int)a0;
- (void)setIsolatedInputLatency:(unsigned int)a0;
- (void)setIsolatedOutputLatency:(unsigned int)a0;

@end
