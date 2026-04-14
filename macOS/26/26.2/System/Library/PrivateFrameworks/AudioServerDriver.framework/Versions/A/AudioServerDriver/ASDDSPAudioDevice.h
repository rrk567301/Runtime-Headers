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

- (unsigned int)timestampPeriod;
- (unsigned int)clockDomain;
- (int)startIOForClient:(unsigned int)a0;
- (double)samplingRate;
- (void)removeInputStream:(id)a0;
- (unsigned int)inputLatency;
- (void)setDeviceName:(id)a0;
- (BOOL)clockIsStable;
- (int)stopIOForClient:(unsigned int)a0;
- (id)modelUID;
- (unsigned int)outputLatency;
- (id)manufacturerName;
- (id)modelName;
- (id)samplingRates;
- (id)driverClassName;
- (id /* block */)getZeroTimestampBlock;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (unsigned int)clockAlgorithm;
- (void)ioThreadStateChange:(id)a0;
- (int)teardownIsolatedIOForStream:(id)a0 useCase:(unsigned long long)a1;
- (BOOL)applyDeviceDSPConfiguration:(id)a0;
- (void)setSamplingRate:(double)a0;
- (BOOL)changeSamplingRate:(double)a0;
- (void)removeOutputStream:(id)a0;
- (unsigned int)outputSafetyOffset;
- (BOOL)canBeDefaultDevice;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 deviceDSPDatabase:(id)a2 plugin:(id)a3;
- (void)addOutputStream:(id)a0;
- (int)setupIsolatedIOForStream:(id)a0 frameSize:(unsigned int)a1 useCase:(unsigned long long)a2;
- (BOOL)underlyingDeviceHasAllProperties:(id)a0;
- (void)addInputStream:(id)a0;
- (BOOL)isHidden;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (BOOL)canBeDefaultOutputDevice;
- (BOOL)updateDeviceDSPConfiguration;
- (void).cxx_destruct;
- (unsigned int)transportType;
- (id)deviceName;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)applyStreamDSPConfiguration:(id)a0 toStream:(id)a1;
- (BOOL)canBeDefaultInputDevice;
- (void)setSupportsIsolatedIO:(BOOL)a0;
- (id)findDSPConfigurationForCurrentState;
- (unsigned int)inputSafetyOffset;
- (id /* block */)willDoWriteMixBlock;
- (id /* block */)willDoReadInputBlock;
- (BOOL)supportsIsolatedIO;
- (BOOL)canBeDefaultSystemDevice;

@end
