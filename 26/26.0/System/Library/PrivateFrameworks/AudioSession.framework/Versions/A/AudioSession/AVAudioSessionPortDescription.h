@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSString *portName;
@property (readonly, nonatomic) NSString *UID;
@property (readonly) BOOL hasHardwareVoiceCallProcessing;
@property (readonly, getter=isSpatialAudioEnabled) BOOL spatialAudioEnabled;
@property (readonly, nonatomic) NSArray *channels;
@property (readonly, nonatomic) NSArray *dataSources;
@property (readonly, nonatomic) AVAudioSessionDataSourceDescription *selectedDataSource;
@property (readonly, nonatomic) AVAudioSessionDataSourceDescription *preferredDataSource;

+ (id)privateCreateArray:(id)a0 owningSession:(id)a1;

- (void)configureChannelsAndDataSources:(id)a0;
- (BOOL)isHeadphones;
- (long long)portSubType;
- (void)dealloc;
- (id)initWithRawPortDescriptionXPC:(id)a0 owningSession:(id)a1;
- (BOOL)isLiveListenSupported;
- (id)privateGetID;
- (BOOL)isLowLatencyAirPlay;
- (BOOL)isEqualToPort:(id)a0 compareStrict:(BOOL)a1;
- (id)bluetoothMicrophoneExtension;
- (id)description;
- (id)initWithType:(id)a0 UID:(id)a1 Name:(id)a2 Channels:(id)a3;
- (struct PortDescriptionImpl { id x0; id x1; id x2; id x3; id x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; id x10; long long x11; unsigned long long x12; id x13; id x14; id x15; id x16; } *)privateGetImplementation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)endpointType;
- (BOOL)setPreferredDataSource:(id)a0 error:(id *)a1;
- (void)setSupportsSpatialAudio:(BOOL)a0;

@end
