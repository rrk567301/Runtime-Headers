@interface VCMediaNegotiatorStreamGroupCodecConfiguration : NSObject <NSCopying>

@property (nonatomic) long long codecType;
@property (nonatomic) unsigned int rtpPayload;
@property (nonatomic) unsigned long long pTime;
@property (nonatomic) char rtcpRTPFB_GNACKEnabled;
@property (nonatomic) char rtcpPSFB_PLIEnabled;
@property (nonatomic) char rtcpPSFB_FIREnabled;
@property (nonatomic) char rtcpSREnabled;
@property (nonatomic) char H264LevelAsymmetryAllowed;
@property (nonatomic) char H264PacketizationMode;
@property (nonatomic) char useInBandFEC;
@property (nonatomic) unsigned long long profileLevelId;
@property (nonatomic) unsigned long long serializedSize;
@property (nonatomic) unsigned int cipherSuite;
@property (nonatomic) unsigned int encoderUsage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;

@end
