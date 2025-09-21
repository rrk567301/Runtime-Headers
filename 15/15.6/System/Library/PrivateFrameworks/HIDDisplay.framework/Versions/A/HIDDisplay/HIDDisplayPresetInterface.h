@class NSArray, NSDictionary;

@interface HIDDisplayPresetInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}

@property (readonly) NSArray *presets;

- (void).cxx_destruct;
- (id)capabilities;
- (id)initWithContainerID:(id)a0;
- (id)initWithService:(unsigned int)a0;
- (long long)getActivePresetIndex:(id *)a0;
- (void)createPresets;
- (long long)getCurrentPresetIndex:(id *)a0;
- (long long)getFactoryDefaultPresetIndex:(id *)a0;
- (id)getHIDDevices;
- (id)getHIDElementForUsage:(long long)a0;
- (id)initWithMatching:(id)a0;
- (char)setActivePresetIndex:(long long)a0 error:(id *)a1;
- (char)setCurrentPresetIndex:(long long)a0 error:(id *)a1;
- (char)setupPresets;

@end
