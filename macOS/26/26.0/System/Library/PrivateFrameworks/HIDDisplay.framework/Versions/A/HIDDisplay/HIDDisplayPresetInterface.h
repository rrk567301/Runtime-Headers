@class NSArray, NSDictionary;

@interface HIDDisplayPresetInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
}

@property (readonly) NSArray *presets;

- (id)initWithService:(unsigned int)a0;
- (id)initWithContainerID:(id)a0;
- (id)capabilities;
- (void).cxx_destruct;
- (long long)getActivePresetIndex:(id *)a0;
- (void)createPresets;
- (long long)getCurrentPresetIndex:(id *)a0;
- (long long)getFactoryDefaultPresetIndex:(id *)a0;
- (id)getHIDDevices;
- (id)getHIDElementForUsage:(long long)a0;
- (id)initWithMatching:(id)a0;
- (BOOL)setActivePresetIndex:(long long)a0 error:(id *)a1;
- (BOOL)setCurrentPresetIndex:(long long)a0 error:(id *)a1;
- (BOOL)setupPresets;

@end
