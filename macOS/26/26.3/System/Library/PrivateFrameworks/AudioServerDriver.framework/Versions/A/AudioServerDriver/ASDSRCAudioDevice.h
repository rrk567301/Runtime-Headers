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

- (unsigned int)clockDomain;
- (int)performStopIO;
- (id)samplingRates;
- (id)modelName;
- (void)setSamplingRates:(id)a0;
- (unsigned int)clockAlgorithm;
- (id /* block */)getZeroTimestampBlock;
- (int)stopIOForClient:(unsigned int)a0;
- (id)modelUID;
- (void)setSupportsIsolatedIO:(BOOL)a0;
- (id)manufacturerName;
- (BOOL)clockIsStable;
- (unsigned int)timestampPeriod;
- (void)setDeviceName:(id)a0;
- (void)ioThreadStateChange:(id)a0;
- (int)startIOForClient:(unsigned int)a0;
- (void)setSamplingRate:(double)a0;
- (void)setIsolatedOutputSafetyOffset:(unsigned int)a0;
- (unsigned int)outputSafetyOffset;
- (double)samplingRate;
- (unsigned int)transportType;
- (double)sampleRateRatio;
- (unsigned int)isolatedTimestampPeriod;
- (BOOL)canBeDefaultSystemDevice;
- (void)setIsolatedTimestampPeriod:(unsigned int)a0;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (id /* block */)willDoReadInputBlock;
- (id)deviceName;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 plugin:(id)a2;
- (double)isolatedSamplingRate;
- (BOOL)isHidden;
- (unsigned int)inputSafetyOffset;
- (unsigned int)isolatedOutputLatency;
- (BOOL)canBeDefaultOutputDevice;
- (id /* block */)willDoWriteMixBlock;
- (BOOL)supportsIsolatedIO;
- (unsigned int)isolatedInputLatency;
- (BOOL)canBeDefaultInputDevice;
- (void).cxx_destruct;
- (void)setIsolatedInputSafetyOffset:(unsigned int)a0;
- (int)teardownIsolatedIOForStream:(id)a0 useCase:(unsigned long long)a1;
- (BOOL)changeSamplingRate:(double)a0;
- (int)setupIsolatedIOForStream:(id)a0 frameSize:(unsigned int)a1 useCase:(unsigned long long)a2;
- (BOOL)canBeDefaultDevice;
- (void)setIsolatedInputLatency:(unsigned int)a0;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (void)setIsolatedOutputLatency:(unsigned int)a0;
- (void)setIsolatedSamplingRate:(double)a0;
- (id /* block */)getIsolatedZeroTimeStampBlock;
- (unsigned int)isolatedInputSafetyOffset;
- (unsigned int)isolatedOutputSafetyOffset;

@end
