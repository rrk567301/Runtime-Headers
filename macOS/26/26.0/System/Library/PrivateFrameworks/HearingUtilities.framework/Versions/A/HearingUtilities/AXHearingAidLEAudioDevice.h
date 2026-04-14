@class NSString, NSArray, AXHearingAidMode;

@interface AXHearingAidLEAudioDevice : AXHearingAidDevice

@property (retain) NSString *name;
@property (retain) NSString *leftUUID;
@property (retain) NSString *rightUUID;
@property (copy) NSArray *leftPrograms;
@property (copy) NSArray *rightPrograms;
@property (retain) AXHearingAidMode *currentLeftProgram;
@property (retain) AXHearingAidMode *currentRightProgram;
@property (nonatomic) unsigned long long leftLoadedProperties;
@property (nonatomic) unsigned long long rightLoadedProperties;
@property (nonatomic) int availableInputEars;
@property (nonatomic) BOOL isLeftEventHandlerSet;
@property (nonatomic) BOOL isRightEventHandlerSet;

- (void)dealloc;
- (void)connect;
- (void)setValue:(id)a0 forProperty:(unsigned long long)a1;
- (void)updateName;
- (void)_initCharacteristicsForPeripheral:(id)a0;
- (BOOL)addPeripheral:(id)a0;
- (BOOL)addPeripheral:(id)a0 asLeft:(BOOL)a1;
- (unsigned long long)availablePropertiesForPeripheral:(id)a0;
- (unsigned long long)availablePropertiesFromDISForPeripheral:(id)a0;
- (void)connectionDidChange;
- (void)delayWriteProperty:(unsigned long long)a0 forPeripheral:(id)a1;
- (id)descriptiveProperties;
- (unsigned long long)deviceProtocol;
- (void)didAddPeripheral:(id)a0;
- (BOOL)didLoadPersistentProperties;
- (void)disconnectAndUnpair:(BOOL)a0;
- (id)discoveringServiceUUIDs;
- (int)earForPeripheral:(id)a0;
- (void)loadBasicProperties;
- (void)loadProperties:(unsigned long long)a0 forPeripheral:(id)a1 withRetryPeriod:(double)a2;
- (void)loadRequiredProperties;
- (id)peripheral:(id)a0 characteristicForUUID:(id)a1;
- (void)peripheralDidUpdateDeviceInfo;
- (void)processBTPresetsUpdate:(id)a0 activePreset:(id)a1 forEar:(int)a2;
- (void)sessionDidUpdateLocations:(id)a0;
- (void)sessionDidUpdateValue:(id)a0 forProperty:(unsigned long long)a1;
- (void)setBasicPropertiesLoaded;
- (void)setNotify:(BOOL)a0 forPeripheral:(id)a1;
- (void)setupLoadingProperties;
- (void)setupUpdatesHandlerForLEAudioPeripheral:(id)a0;
- (void)writeValueForProperty:(unsigned long long)a0;

@end
