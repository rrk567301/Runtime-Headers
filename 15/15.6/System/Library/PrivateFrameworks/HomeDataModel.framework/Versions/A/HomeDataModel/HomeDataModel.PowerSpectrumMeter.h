@interface HomeDataModel.PowerSpectrumMeter : NSObject <AVCAudioPowerSpectrumMeterDelegate> {
    void /* unknown type, empty encoding */ stream;
    void /* unknown type, empty encoding */ continuation;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ tokens;
    void /* unknown type, empty encoding */ $__lazy_storage_$_meter;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)audioPowerSpectrumMeter:(id)a0 didUpdateAudioPowerSpectrums:(id)a1;

@end
