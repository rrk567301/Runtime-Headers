@class NSArray, NSMutableSet;

@interface AVCMediaStreamNegotiatorSettingsiPadCompanion : AVCMediaStreamNegotiatorSettings {
    NSArray *_hdrModePixelFormats;
    NSMutableSet *_hdrModesSupported;
}

- (void)dealloc;
- (int)operatingMode;
- (long long)tilesPerFrame;
- (long long)captureSource;
- (id)hdrModesSupported;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;
- (long long)videoStreamMode;
- (id)hdrModePixelFormats;

@end
