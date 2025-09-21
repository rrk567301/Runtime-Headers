@class NSArray;

@interface AVCMediaStreamNegotiatorSettingsCompositorServicesStereoVideo : AVCMediaStreamNegotiatorSettings {
    long long _captureSource;
    NSArray *_videoBufferDescription;
}

- (id)clientName;
- (double)rtcpTimeOutInterval;
- (long long)rtcpCipherSuite;
- (long long)videoStreamMode;
- (long long)captureSource;
- (unsigned char)featureListStringType;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;
- (unsigned long long)maxBandwidth;
- (unsigned long long)minBandwidth;
- (int)operatingMode;
- (double)rtcpSendInterval;
- (BOOL)rtcpTimeOutEnabled;
- (long long)rtpCipherSuite;
- (id)videoBufferDescription;

@end
