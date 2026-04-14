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

- (unsigned int)clockDomain;
- (id)samplingRates;
- (id)driverClassName;
- (id)modelName;
- (unsigned int)inputLatency;
- (unsigned int)clockAlgorithm;
- (id /* block */)getZeroTimestampBlock;
- (int)stopIOForClient:(unsigned int)a0;
- (id)modelUID;
- (void)setSupportsIsolatedIO:(BOOL)a0;
- (id)manufacturerName;
- (BOOL)clockIsStable;
- (unsigned int)timestampPeriod;
- (unsigned int)outputLatency;
- (void)setDeviceName:(id)a0;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (void)ioThreadStateChange:(id)a0;
- (int)startIOForClient:(unsigned int)a0;
- (void)setSamplingRate:(double)a0;
- (void)setIsolatedOutputSafetyOffset:(unsigned int)a0;
- (unsigned int)outputSafetyOffset;
- (double)samplingRate;
- (unsigned int)transportType;
- (void)removeInputStream:(id)a0;
- (void)addOutputStream:(id)a0;
- (unsigned int)isolatedTimestampPeriod;
- (BOOL)canBeDefaultSystemDevice;
- (void)setIsolatedTimestampPeriod:(unsigned int)a0;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 forObject:(id)a1;
- (id /* block */)willDoReadInputBlock;
- (BOOL)underlyingDeviceHasAllProperties:(id)a0;
- (id)deviceName;
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
- (id)findDSPConfigurationForCurrentState;
- (BOOL)changeSamplingRate:(double)a0;
- (int)setupIsolatedIOForStream:(id)a0 frameSize:(unsigned int)a1 useCase:(unsigned long long)a2;
- (BOOL)canBeDefaultDevice;
- (void)setIsolatedInputLatency:(unsigned int)a0;
- (BOOL)requestConfigurationChangeForDevice:(id)a0 withBlock:(id /* block */)a1;
- (void)setIsolatedOutputLatency:(unsigned int)a0;
- (BOOL)applyStreamDSPConfiguration:(id)a0 toStream:(id)a1;
- (BOOL)applyDeviceDSPConfiguration:(id)a0;
- (BOOL)updateDeviceDSPConfiguration;
- (void)setIsolatedSamplingRate:(double)a0;
- (id /* block */)getIsolatedZeroTimeStampBlock;
- (void)removeOutputStream:(id)a0;
- (void)addInputStream:(id)a0;
- (unsigned int)isolatedInputSafetyOffset;
- (unsigned int)isolatedOutputSafetyOffset;
- (id)initWithDeviceUID:(id)a0 underlyingDevice:(id)a1 deviceDSPDatabase:(id)a2 plugin:(id)a3;

@end
