@interface AVCMediaStreamNegotiatorSettingsRemoteMic : AVCMediaStreamNegotiatorSettings

- (unsigned long long)ptime;
- (int)operatingMode;
- (long long)audioStreamMode;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;
- (int)preferredAudioCodec;

@end
