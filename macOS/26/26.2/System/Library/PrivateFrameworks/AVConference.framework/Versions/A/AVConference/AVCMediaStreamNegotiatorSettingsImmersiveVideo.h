@interface AVCMediaStreamNegotiatorSettingsImmersiveVideo : AVCMediaStreamNegotiatorSettings {
    long long _captureSource;
}

+ (BOOL)isOfferSupported;

- (int)connectionType;
- (id)clientName;
- (double)rtcpTimeOutInterval;
- (long long)rtcpCipherSuite;
- (long long)videoStreamMode;
- (long long)captureSource;
- (unsigned char)featureListStringType;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;
- (unsigned int)jitterBufferMode;
- (unsigned long long)maxBandwidth;
- (unsigned long long)minBandwidth;
- (struct __CFArray { } *)newTagCollectionArray;
- (struct OpaqueCMTagCollection { } *)newTagCollectionForMetadata;
- (struct OpaqueCMTagCollection { } *)newTagCollectionForPixelBufferAtChannelIndex:(int)a0;
- (int)operatingMode;
- (double)rtcpSendInterval;
- (BOOL)rtcpTimeOutEnabled;
- (long long)rtpCipherSuite;
- (id)videoBufferDescription;

@end
