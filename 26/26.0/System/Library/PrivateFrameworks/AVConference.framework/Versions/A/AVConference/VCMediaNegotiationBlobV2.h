@class VCMediaNegotiationBlobV2GeneralInfo, VCMediaNegotiationBlobV2BandwidthSettings, VCMediaNegotiationBlobV2MicrophoneSettingsU1, VCMediaNegotiationBlobV2CameraSettingsU1, VCMediaNegotiationBlobV2CodecFeatures, VCMediaNegotiationBlobV2MomentsSettings, NSMutableArray;

@interface VCMediaNegotiationBlobV2 : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasGeneralInfo;
@property (retain, nonatomic) VCMediaNegotiationBlobV2GeneralInfo *generalInfo;
@property (readonly, nonatomic) BOOL hasBandwidthSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobV2BandwidthSettings *bandwidthSettings;
@property (readonly, nonatomic) BOOL hasCodecSupport;
@property (retain, nonatomic) VCMediaNegotiationBlobV2CodecFeatures *codecSupport;
@property (readonly, nonatomic) BOOL hasMicrophoneU1;
@property (retain, nonatomic) VCMediaNegotiationBlobV2MicrophoneSettingsU1 *microphoneU1;
@property (readonly, nonatomic) BOOL hasCameraU1;
@property (retain, nonatomic) VCMediaNegotiationBlobV2CameraSettingsU1 *cameraU1;
@property (readonly, nonatomic) BOOL hasMomentsSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobV2MomentsSettings *momentsSettings;
@property (retain, nonatomic) NSMutableArray *streamGroups;

+ (int)pruneDisabledCipherSuites:(int)a0 u1AuthTagEnabled:(BOOL)a1;
+ (Class)streamGroupsType;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)addStreamGroups:(id)a0;
- (void)clearStreamGroups;
- (void)printWithTitle:(id)a0 logFile:(void *)a1;
- (id)streamGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)streamGroupsCount;

@end
