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

- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (id)modelName;
- (unsigned int)timestampPeriod;
- (id)driverClassName;
- (int)stopIOForClient:(unsigned int)a0;
- (unsigned int)outputLatency;
- (void)setSamplingRate:(double)a0;
- (BOOL)canBeDefaultInputDevice;
- (id)modelUID;
- (void)ioThreadStateChange:(id)a0;
- (unsigned int)transportType;
- (double)samplingRate;
- (id /* block */)getZeroTimestampBlock;
- (unsigned int)isolatedOutputLatency;
- (unsigned int)clockAlgorithm;
- (void)setDeviceName:(id)a0;
- (unsigned int)clockDomain;
- (BOOL)clockIsStable;
- (unsigned int)inputLatency;
- (int)startIOForClient:(unsigned int)a0;
- (void)addInputStream:(id)a0;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (void)addOutputStream:(id)a0;
- (id)deviceName;
- (id)manufacturerName;
- (id)samplingRates;
- (void)removeInputStream:(id)a0;
- (unsigned int)isolatedInputSafetyOffset;
- (int)setupIsolatedIOForStream:(id)a0 frameSize:(unsigned int)a1 useCase:(unsigned long long)a2;
- (void)removeOutputStream:(id)a0;
- (BOOL)changeSamplingRate:(double)a0;
- (unsigned int)isolatedOutputSafetyOffset;
- (unsigned int)isolatedTimestampPeriod;
- (id /* block */)willDoReadInputBlock;
- (void)setIsolatedOutputSafetyOffset:(unsigned int)a0;
- (BOOL)canBeDefaultOutputDevice;
- (id)findDSPConfigurationForCurrentState;
- (BOOL)applyDeviceDSPConfiguration:(id)a0;
- (BOOL)isHidden;
- (BOOL)canBeDefaultSystemDevice;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 deviceDSPDatabase:(id)a2 plugin:(id)a3;
- (id)serialNumber;
- (id /* block */)willDoWriteMixBlock;
- (void).cxx_destruct;
- (unsigned int)isolatedInputLatency;
- (int)teardownIsolatedIOForStream:(id)a0 useCase:(unsigned long long)a1;
- (void)setIsolatedInputSafetyOffset:(unsigned int)a0;
- (BOOL)updateDeviceDSPConfiguration;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (void)setSupportsIsolatedIO:(BOOL)a0;
- (unsigned int)outputSafetyOffset;
- (BOOL)supportsIsolatedIO;
- (double)isolatedSamplingRate;
- (unsigned int)inputSafetyOffset;
- (id /* block */)getIsolatedZeroTimeStampBlock;
- (BOOL)canBeDefaultDevice;
- (BOOL)applyStreamDSPConfiguration:(id)a0 toStream:(id)a1;
- (void)setIsolatedSamplingRate:(double)a0;
- (void)setIsolatedTimestampPeriod:(unsigned int)a0;
- (void)setIsolatedInputLatency:(unsigned int)a0;
- (BOOL)underlyingDeviceHasAllProperties:(id)a0;
- (void)setIsolatedOutputLatency:(unsigned int)a0;

@end
