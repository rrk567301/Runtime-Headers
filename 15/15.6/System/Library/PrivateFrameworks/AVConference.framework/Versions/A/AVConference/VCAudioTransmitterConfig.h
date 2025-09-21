@class AVCStatisticsCollector, NSArray, VCTransportSession, NSMutableArray, VCAudioPayload;

@interface VCAudioTransmitterConfig : NSObject {
    char _shouldUseRedAsBoolean;
}

@property (nonatomic) struct tagHANDLE { int x0; } *rtpHandle;
@property (nonatomic) struct tagHANDLE { int x0; } *afrcHandle;
@property (nonatomic) struct tagHANDLE { int x0; } *mediaQueue;
@property (nonatomic) struct tagHANDLE { int x0; } *rtpVideo;
@property (nonatomic) void *controlInfoGenerator;
@property (retain, nonatomic) NSMutableArray *audioPayloads;
@property (retain, nonatomic) VCAudioPayload *chosenAudioPayload;
@property (retain, nonatomic) VCAudioPayload *chosenDTXPayload;
@property (nonatomic) unsigned char packetsPerBundle;
@property (nonatomic) char useRateControl;
@property (nonatomic) int bundlingScheme;
@property (nonatomic) char isUseCaseWatchContinuity;
@property (nonatomic) char allowAudioSwitching;
@property (nonatomic) char supportsAdaptation;
@property (nonatomic) char needsPacketThread;
@property (nonatomic) int chosenRedPayloadType;
@property (nonatomic, getter=isRedEnabled) char redEnabled;
@property (nonatomic) char includeRedSequenceOffset;
@property (nonatomic) unsigned int redNumPayloads;
@property (nonatomic) unsigned int redMaxDelay20ms;
@property (nonatomic) char transmitROC;
@property (nonatomic) int operatingMode;
@property (retain, nonatomic) VCTransportSession *transportSession;
@property (nonatomic) struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } inputFormat;
@property (nonatomic) struct opaqueRTCReporting { } *reportingAgent;
@property (nonatomic) int reportingParentID;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic) char ignoreSilence;
@property (nonatomic) int ratType;
@property (retain, nonatomic) NSArray *streamIDs;
@property (nonatomic) unsigned int tierNetworkBitrate;
@property (nonatomic) unsigned int maxIDSStreamIdCount;
@property (retain, nonatomic) NSArray *supportedNumRedundantPayload;
@property (nonatomic) char sendActiveVoiceOnly;
@property (nonatomic, getter=isCurrentDTXEnabled) char currentDTXEnable;
@property (nonatomic) unsigned char mediaControlInfoVersion;
@property (nonatomic) char alwaysOnAudioRedundancyEnabled;
@property (nonatomic) char cellularAllowRedLowBitratesEnabled;
@property (nonatomic) char wifiAllowRedLowBitratesEnabled;
@property (nonatomic) unsigned long long remoteIDSParticipantID;
@property (nonatomic) char shouldCreateRedundancyController;
@property (nonatomic) char useChannelDataFormat;
@property (nonatomic) char shouldApplyRedAsBoolean;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) char useWifiTiers;
@property (nonatomic) char supportsCodecBandwidthUpdate;
@property (nonatomic) struct tagVCCryptor { } *sframeCryptor;
@property (nonatomic) unsigned int packetExpirationTime;
@property (nonatomic) char audioIssueDetectorEnabled;
@property (nonatomic) char targetBitrateIsAudioOnly;
@property (nonatomic) char audioDumpEnabled;
@property (nonatomic) unsigned char tierPickerMode;
@property (nonatomic) char ramStadSRCEnabled;
@property (nonatomic) unsigned int maxAudioPacketSize;
@property (nonatomic) unsigned int constantTransportOverhead;
@property (nonatomic) char isHigherAudioREDCutoverU1Enabled;

- (void)dealloc;
- (id)description;

@end
