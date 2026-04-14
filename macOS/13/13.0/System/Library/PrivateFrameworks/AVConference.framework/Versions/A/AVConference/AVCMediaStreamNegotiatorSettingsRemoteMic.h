@interface AVCMediaStreamNegotiatorSettingsRemoteMic : AVCMediaStreamNegotiatorSettings

- (unsigned long long)ptime;
- (long long)audioStreamMode;
- (int)operatingMode;
- (int)preferredAudioCodec;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;

@end
