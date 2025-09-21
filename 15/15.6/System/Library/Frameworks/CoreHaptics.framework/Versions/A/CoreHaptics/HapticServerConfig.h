@class NSString, NSDictionary;

@interface HapticServerConfig : NSObject

@property (readonly) char usingInternalHaptics;
@property (readonly) char supportsAudioPlayback;
@property (readonly) char supportsHapticPlayback;
@property (readonly) char supportsAdvancedPatternPlayers;
@property (readonly) float hapticContinuousTimeLimit;
@property (readonly) NSString *currentLocality;
@property (readonly) float defaultHapticTransientEventSharpness;
@property (readonly) float defaultHapticContinuousEventSharpness;
@property (readonly) float defaultHapticTransientEventIntensity;
@property (readonly) float defaultHapticContinuousEventIntensity;
@property (readonly) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } hapticTransientIDs;
@property (readonly) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } hapticContinuousSustainedIDs;
@property (readonly) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } hapticContinuousNonsustainedIDs;
@property (readonly) NSDictionary *builtInAudioEventIDs;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithHapticPlayer:(id)a0 withOptions:(id)a1 error:(id *)a2;

@end
