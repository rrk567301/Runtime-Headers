@interface AVCMediaStreamNegotiatorSettingsCoreDeviceScreenSharing : AVCMediaStreamNegotiatorSettings {
    long long _accessNetworkType;
}

- (long long)accessNetworkType;
- (int)operatingMode;
- (long long)videoStreamMode;
- (long long)captureSource;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;

@end
