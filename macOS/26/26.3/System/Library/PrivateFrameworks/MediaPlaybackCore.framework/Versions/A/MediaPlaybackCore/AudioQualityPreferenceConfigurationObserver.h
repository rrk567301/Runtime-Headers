@interface AudioQualityPreferenceConfigurationObserver : NSObject {
    void /* unknown type, empty encoding */ preferenceChangeSubscription;
    void /* unknown type, empty encoding */ preferenceSnapshot;
    void /* function */ preferenceChangeClosure;
}

@property (nonatomic, copy) id /* block */ preferenceChangeClosure;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)beginObservationWithPreferenceChangeClosure:(id /* block */)a0;
- (void)checkForAudioQualityPreferenceChanges;
- (void)setupPreferenceChangeObserver;
- (void)suspendObservation;

@end
