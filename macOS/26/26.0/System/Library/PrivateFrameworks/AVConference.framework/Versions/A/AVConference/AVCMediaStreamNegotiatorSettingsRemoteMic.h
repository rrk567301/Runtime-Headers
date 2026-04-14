@interface AVCMediaStreamNegotiatorSettingsRemoteMic : AVCMediaStreamNegotiatorSettings {
    int _preferredAudioPayload;
    unsigned long long _channelCount;
    unsigned long long _preferredMediaBitrate;
    unsigned long long _packetExpirationTime;
    unsigned long long _pTime;
}

- (unsigned long long)audioChannelCount;
- (unsigned long long)ptime;
- (long long)audioStreamMode;
- (unsigned long long)fixedJitterBufferSize;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;
- (unsigned int)jitterBufferMode;
- (id)newAudioRuleCollection;
- (int)operatingMode;
- (unsigned long long)packetExpirationTime;
- (int)preferredAudioCodec;
- (unsigned long long)preferredMediaBitRate;
- (void)setUpPropertiesWithOptions:(id)a0;

@end
