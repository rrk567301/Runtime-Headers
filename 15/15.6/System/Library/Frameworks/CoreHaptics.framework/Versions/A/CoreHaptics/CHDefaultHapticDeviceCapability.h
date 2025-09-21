@interface CHDefaultHapticDeviceCapability : NSObject <CHHapticDeviceCapability> {
    char _supportsHaptics;
    char _supportsAudio;
}

@property (readonly) unsigned long long maximumNumberOfHapticChannels;
@property (readonly) unsigned long long maximumNumberOfAudioChannels;
@property (readonly) char supportsHaptics;
@property (readonly) char supportsAudio;

- (id)init;
- (id)initPrivate;
- (id)attributesForDynamicParameter:(id)a0 error:(id *)a1;
- (id)attributesForEventParameter:(id)a0 eventType:(id)a1 error:(id *)a2;
- (float)defaultValueForDynamicParameter:(id)a0;
- (float)defaultValueForEventParameter:(id)a0 eventType:(id)a1;
- (float)maximumValueForDynamicParameter:(id)a0;
- (float)maximumValueForEventParameter:(id)a0;
- (float)minimumValueForDynamicParameter:(id)a0;
- (float)minimumValueForEventParameter:(id)a0;

@end
