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

- (void)setDeviceName:(id)a0;
- (id)modelName;
- (unsigned int)timestampPeriod;
- (id)modelUID;
- (unsigned int)outputLatency;
- (unsigned int)inputLatency;
- (id)manufacturerName;
- (double)samplingRate;
- (int)stopIOForClient:(unsigned int)a0;
- (id)driverClassName;
- (id /* block */)getZeroTimestampBlock;
- (void)setSamplingRate:(double)a0;
- (unsigned int)clockAlgorithm;
- (int)startIOForClient:(unsigned int)a0;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (void)ioThreadStateChange:(id)a0;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 deviceDSPDatabase:(id)a2 plugin:(id)a3;
- (id)deviceName;
- (unsigned int)clockDomain;
- (id)samplingRates;
- (BOOL)isHidden;
- (void)setSupportsIsolatedIO:(BOOL)a0;
- (unsigned int)transportType;
- (BOOL)canBeDefaultSystemDevice;
- (unsigned int)inputSafetyOffset;
- (BOOL)canBeDefaultDevice;
- (void)addInputStream:(id)a0;
- (BOOL)canBeDefaultInputDevice;
- (void)removeInputStream:(id)a0;
- (BOOL)applyDeviceDSPConfiguration:(id)a0;
- (BOOL)applyStreamDSPConfiguration:(id)a0 toStream:(id)a1;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (void)addOutputStream:(id)a0;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (void)removeOutputStream:(id)a0;
- (id)findDSPConfigurationForCurrentState;
- (BOOL)underlyingDeviceHasAllProperties:(id)a0;
- (BOOL)canBeDefaultOutputDevice;
- (void).cxx_destruct;
- (BOOL)supportsIsolatedIO;
- (id /* block */)willDoWriteMixBlock;
- (int)setupIsolatedIOForStream:(id)a0 frameSize:(unsigned int)a1 useCase:(unsigned long long)a2;
- (unsigned int)outputSafetyOffset;
- (id /* block */)willDoReadInputBlock;
- (int)teardownIsolatedIOForStream:(id)a0 useCase:(unsigned long long)a1;
- (BOOL)changeSamplingRate:(double)a0;
- (BOOL)clockIsStable;
- (BOOL)updateDeviceDSPConfiguration;

@end
