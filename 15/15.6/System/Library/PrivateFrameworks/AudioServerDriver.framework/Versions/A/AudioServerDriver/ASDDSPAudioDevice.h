@class NSString, ASDAudioDeviceDSPDatabase, ASDAudioDeviceDSPConfiguration, ASDAudioDevice;

@interface ASDDSPAudioDevice : ASDAudioDevice <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate> {
    NSString *_resourcePath;
}

@property (retain, nonatomic) ASDAudioDeviceDSPConfiguration *currentDSPConfiguration;
@property (readonly, nonatomic) ASDAudioDevice *underlyingDevice;
@property (readonly, nonatomic) ASDAudioDeviceDSPDatabase *dspDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dspItemsInConfiguration:(id)a0 notInConfiguration:(id)a1;

- (void).cxx_destruct;
- (char)isHidden;
- (id)manufacturerName;
- (id)deviceName;
- (unsigned int)transportType;
- (id)modelName;
- (void)setDeviceName:(id)a0;
- (unsigned int)clockDomain;
- (unsigned int)inputLatency;
- (unsigned int)inputSafetyOffset;
- (id)modelUID;
- (unsigned int)outputLatency;
- (unsigned int)outputSafetyOffset;
- (double)samplingRate;
- (void)setSamplingRate:(double)a0;
- (id)samplingRates;
- (unsigned int)timestampPeriod;
- (void)addOutputStream:(id)a0;
- (char)changeSamplingRate:(double)a0;
- (id /* block */)getZeroTimestampBlock;
- (void)removeOutputStream:(id)a0;
- (id /* block */)willDoReadInputBlock;
- (id /* block */)willDoWriteMixBlock;
- (void)addInputStream:(id)a0;
- (id)driverClassName;
- (char)applyDeviceDSPConfiguration:(id)a0;
- (char)applyStreamDSPConfiguration:(id)a0 toStream:(id)a1;
- (char)canBeDefaultDevice;
- (char)canBeDefaultInputDevice;
- (char)canBeDefaultOutputDevice;
- (char)canBeDefaultSystemDevice;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (unsigned int)clockAlgorithm;
- (char)clockIsStable;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(char)a1;
- (id)findDSPConfigurationForCurrentState;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 deviceDSPDatabase:(id)a2 plugin:(id)a3;
- (void)ioThreadStateChange:(id)a0;
- (void)removeInputStream:(id)a0;
- (char)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (void)setSupportsIsolatedIO:(char)a0;
- (int)setupIsolatedIOForStream:(id)a0 frameSize:(unsigned int)a1 useCase:(unsigned long long)a2;
- (int)startIOForClient:(unsigned int)a0;
- (int)stopIOForClient:(unsigned int)a0;
- (char)supportsIsolatedIO;
- (int)teardownIsolatedIOForStream:(id)a0 useCase:(unsigned long long)a1;
- (char)underlyingDeviceHasAllProperties:(id)a0;
- (char)updateDeviceDSPConfiguration;

@end
