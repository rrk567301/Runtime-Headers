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

- (BOOL)isHidden;
- (void).cxx_destruct;
- (id)manufacturerName;
- (id)deviceName;
- (unsigned int)transportType;
- (id)modelName;
- (void)setDeviceName:(id)a0;
- (unsigned int)clockDomain;
- (id)modelUID;
- (unsigned int)inputSafetyOffset;
- (unsigned int)outputSafetyOffset;
- (double)samplingRate;
- (void)setSamplingRate:(double)a0;
- (id)samplingRates;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (int)startIOForClient:(unsigned int)a0;
- (int)stopIOForClient:(unsigned int)a0;
- (int)performStopIO;
- (BOOL)changeSamplingRate:(double)a0;
- (void)setSamplingRates:(id)a0;
- (unsigned int)timestampPeriod;
- (unsigned int)clockAlgorithm;
- (BOOL)clockIsStable;
- (BOOL)canBeDefaultDevice;
- (BOOL)canBeDefaultInputDevice;
- (BOOL)canBeDefaultOutputDevice;
- (BOOL)canBeDefaultSystemDevice;
- (id /* block */)getZeroTimestampBlock;
- (id /* block */)willDoReadInputBlock;
- (id /* block */)willDoWriteMixBlock;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 plugin:(id)a2;
- (double)sampleRateRatio;

@end
