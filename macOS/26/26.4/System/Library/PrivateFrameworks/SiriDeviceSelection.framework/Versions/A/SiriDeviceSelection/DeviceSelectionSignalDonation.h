@interface DeviceSelectionSignalDonation : NSObject {
    void /* unknown type, empty encoding */ donator;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)donateFingerprint:(id)a0 forTimestamp:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)donateFirstPassVoiceTrigger:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)donateLoudness:(id)a0 withCompletion:(id /* block */)a1;
- (void)donatePersonalHeySiri:(id)a0 withCompletion:(id /* block */)a1;
- (void)donateTriggerSource:(id)a0 withCompletion:(id /* block */)a1;
- (void)prewarmDonations;

@end
