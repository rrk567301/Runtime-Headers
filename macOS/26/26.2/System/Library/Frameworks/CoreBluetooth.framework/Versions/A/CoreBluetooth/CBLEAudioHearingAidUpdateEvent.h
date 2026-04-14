@class NSMutableArray, CBLEAudioHearingAidPreset;

@interface CBLEAudioHearingAidUpdateEvent : CBLEAudioPeripheralUpdateEvent

@property (copy, nonatomic) NSMutableArray *presetResults;
@property (copy, nonatomic) CBLEAudioHearingAidPreset *activePreset;

- (void).cxx_destruct;
- (id)initWithEventType:(long long)a0;
- (id)initWithValue:(long long)a0 withValue:(id)a1;

@end
