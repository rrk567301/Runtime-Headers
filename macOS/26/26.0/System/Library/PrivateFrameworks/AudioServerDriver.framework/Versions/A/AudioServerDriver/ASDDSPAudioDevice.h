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

- (id /* block */)getZeroTimestampBlock;
- (id)modelName;
- (unsigned int)outputLatency;
- (unsigned int)timestampPeriod;
- (id)driverClassName;
- (BOOL)clockIsStable;
- (id)manufacturerName;
- (int)stopIOForClient:(unsigned int)a0;
- (void)ioThreadStateChange:(id)a0;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (id)modelUID;
- (int)startIOForClient:(unsigned int)a0;
- (id)samplingRates;
- (unsigned int)inputLatency;
- (unsigned int)clockDomain;
- (unsigned int)clockAlgorithm;
- (void)setDeviceName:(id)a0;
- (BOOL)supportsIsolatedIO;
- (id)deviceName;
- (void)removeOutputStream:(id)a0;
- (id /* block */)willDoReadInputBlock;
- (BOOL)changeSamplingRate:(double)a0;
- (double)samplingRate;
- (void)addInputStream:(id)a0;
- (BOOL)underlyingDeviceHasAllProperties:(id)a0;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (unsigned int)inputSafetyOffset;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (id /* block */)willDoWriteMixBlock;
- (int)teardownIsolatedIOForStream:(id)a0 useCase:(unsigned long long)a1;
- (BOOL)updateDeviceDSPConfiguration;
- (int)setupIsolatedIOForStream:(id)a0 frameSize:(unsigned int)a1 useCase:(unsigned long long)a2;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 deviceDSPDatabase:(id)a2 plugin:(id)a3;
- (BOOL)canBeDefaultInputDevice;
- (BOOL)canBeDefaultOutputDevice;
- (void)setSupportsIsolatedIO:(BOOL)a0;
- (BOOL)applyStreamDSPConfiguration:(id)a0 toStream:(id)a1;
- (unsigned int)transportType;
- (id)findDSPConfigurationForCurrentState;
- (BOOL)canBeDefaultDevice;
- (unsigned int)outputSafetyOffset;
- (BOOL)applyDeviceDSPConfiguration:(id)a0;
- (void)removeInputStream:(id)a0;
- (void)addOutputStream:(id)a0;
- (void)setSamplingRate:(double)a0;
- (BOOL)isHidden;
- (BOOL)canBeDefaultSystemDevice;
- (void).cxx_destruct;

@end
