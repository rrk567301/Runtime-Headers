@interface AVCMediaStreamNegotiatorSettingsImmersiveAudio : AVCMediaStreamNegotiatorSettings {
    int _preferredAudioPayload;
}

- (id)clientName;
- (unsigned long long)audioChannelCount;
- (unsigned long long)ptime;
- (double)rtcpTimeOutInterval;
- (long long)audioStreamMode;
- (long long)rtcpCipherSuite;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;
- (unsigned int)jitterBufferMode;
- (int)operatingMode;
- (int)preferredAudioCodec;
- (unsigned long long)preferredMediaBitRate;
- (double)rtcpSendInterval;
- (BOOL)rtcpTimeOutEnabled;
- (long long)rtpCipherSuite;

@end
