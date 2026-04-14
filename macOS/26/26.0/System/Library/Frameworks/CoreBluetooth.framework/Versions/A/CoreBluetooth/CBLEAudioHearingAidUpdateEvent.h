@class NSMutableArray, CBLEAudioHearingAidPreset;

@interface CBLEAudioHearingAidUpdateEvent : CBLEAudioPeripheralUpdateEvent

@property (copy, nonatomic) NSMutableArray *presetResults;
@property (copy, nonatomic) CBLEAudioHearingAidPreset *activePreset;

- (id)initWithEventType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithValue:(long long)a0 withValue:(id)a1;

@end
