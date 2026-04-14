@interface AVCMediaStreamNegotiatorSettingsAirplayMirroring : AVCMediaStreamNegotiatorSettings {
    long long _tilesPerFrame;
}

- (int)operatingMode;
- (long long)tilesPerFrame;
- (long long)captureSource;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;
- (long long)videoStreamMode;

@end
