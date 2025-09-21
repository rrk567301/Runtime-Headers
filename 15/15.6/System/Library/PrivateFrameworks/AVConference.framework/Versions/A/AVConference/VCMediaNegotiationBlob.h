@class VCMediaNegotiationBlobMomentsSettings, VCMediaNegotiationBlobVideoSettings, NSString, VCMediaNegotiationFaceTimeSettings, VCMediaNegotiationBlobCaptionsSettings, VCMediaNegotiationBlobAudioSettings, NSMutableArray;

@interface VCMediaNegotiationBlob : PBCodable <NSCopying> {
    struct { unsigned char ntpTime : 1; unsigned char accessNetworkType : 1; unsigned char basebandCodecSampleRate : 1; unsigned char blobVersion : 1; unsigned char mediaControlInfoVersion : 1; unsigned char allowDynamicMaxBitrate : 1; unsigned char allowsContentsChangeWithAspectPreservation : 1; } _has;
}

@property (nonatomic) char hasAllowDynamicMaxBitrate;
@property (nonatomic) char allowDynamicMaxBitrate;
@property (nonatomic) char hasAllowsContentsChangeWithAspectPreservation;
@property (nonatomic) char allowsContentsChangeWithAspectPreservation;
@property (readonly, nonatomic) char hasAudioSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobAudioSettings *audioSettings;
@property (readonly, nonatomic) char hasVideoSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobVideoSettings *videoSettings;
@property (readonly, nonatomic) char hasScreenSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobVideoSettings *screenSettings;
@property (readonly, nonatomic) char hasUserAgent;
@property (retain, nonatomic) NSString *userAgent;
@property (readonly, nonatomic) char hasBasebandCodec;
@property (retain, nonatomic) NSString *basebandCodec;
@property (nonatomic) char hasBasebandCodecSampleRate;
@property (nonatomic) unsigned int basebandCodecSampleRate;
@property (retain, nonatomic) NSMutableArray *bandwidthSettings;
@property (readonly, nonatomic) char hasCaptionsSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobCaptionsSettings *captionsSettings;
@property (retain, nonatomic) NSMutableArray *multiwayAudioStreams;
@property (readonly, nonatomic) char hasMomentsSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobMomentsSettings *momentsSettings;
@property (nonatomic) char hasNtpTime;
@property (nonatomic) unsigned long long ntpTime;
@property (nonatomic) char hasBlobVersion;
@property (nonatomic) unsigned int blobVersion;
@property (retain, nonatomic) NSMutableArray *multiwayVideoStreams;
@property (nonatomic) char hasMediaControlInfoVersion;
@property (nonatomic) unsigned int mediaControlInfoVersion;
@property (readonly, nonatomic) char hasFaceTimeSettings;
@property (retain, nonatomic) VCMediaNegotiationFaceTimeSettings *faceTimeSettings;
@property (nonatomic) char hasAccessNetworkType;
@property (nonatomic) unsigned int accessNetworkType;

+ (Class)bandwidthSettingsType;
+ (Class)multiwayAudioStreamsType;
+ (Class)multiwayVideoStreamType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addBandwidthSettings:(id)a0;
- (void)addMultiwayAudioStreams:(id)a0;
- (void)addMultiwayVideoStream:(id)a0;
- (id)bandwidthSettingsAtIndex:(unsigned long long)a0;
- (unsigned long long)bandwidthSettingsCount;
- (void)clearBandwidthSettings;
- (void)clearMultiwayAudioStreams;
- (void)clearMultiwayVideoStreams;
- (void)formatBandwidthConfig:(int)a0 maxBanxwidth:(unsigned int)a1 bandwidthString:(id)a2;
- (id)multiwayAudioStreamsAtIndex:(unsigned long long)a0;
- (unsigned long long)multiwayAudioStreamsCount;
- (id)multiwayVideoStreamAtIndex:(unsigned long long)a0;
- (unsigned long long)multiwayVideoStreamsCount;
- (void)printBandwidthSettingsWithLogFile:(void *)a0;
- (void)printCaptionsSettingsWithLogFile:(void *)a0;
- (void)printMomentsSettingsWithLogFile:(void *)a0;
- (void)printMultiwayAudioStreamsWithLogFile:(void *)a0;
- (void)printMultiwayVideoStreamsWithLogFile:(void *)a0;
- (void)printWithTitle:(id)a0 blobSize:(unsigned int)a1 logFile:(void *)a2;

@end
