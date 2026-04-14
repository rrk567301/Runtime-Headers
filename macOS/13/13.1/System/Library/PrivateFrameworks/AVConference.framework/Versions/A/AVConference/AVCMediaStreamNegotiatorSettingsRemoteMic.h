@interface AVCMediaStreamNegotiatorSettingsRemoteMic : AVCMediaStreamNegotiatorSettings

- (long long)audioStreamMode;
- (unsigned long long)ptime;
- (int)operatingMode;
- (int)preferredAudioCodec;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;

@end
