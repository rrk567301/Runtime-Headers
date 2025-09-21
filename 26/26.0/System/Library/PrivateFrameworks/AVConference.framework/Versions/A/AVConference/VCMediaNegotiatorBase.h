@class NSString, VCMediaNegotiatorResults, VCMediaNegotiatorResultsAudio, VCMediaNegotiatorResultsVideo, NSMutableDictionary, NSMutableArray, VCMediaNegotiatorLocalConfiguration, VCMediaNegotiatorResultsMediaRecorder, VCMediaNegotiatorResultsFaceTimeSettings, VCMediaNegotiatorMediaEncryptionSettings;

@interface VCMediaNegotiatorBase : NSObject <VCMediaNegotiatorProtocol> {
    NSMutableDictionary *_negotiatedU1MediaSettings;
}

@property (readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsAudio *negotiatedAudioSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedVideoSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedScreenSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsMediaRecorder *negotiatedMediaRecorderSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsFaceTimeSettings *negotiatedFaceTimeSettings;
@property (readonly, nonatomic) NSMutableArray *negotiatedStreamGroups;
@property (readonly, nonatomic) VCMediaNegotiatorMediaEncryptionSettings *negotiatedMediaEncyptionSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyCellularPreferredRule:(id)a0;
+ (unsigned char)featureListStringTypeForMediaType:(unsigned char)a0;
+ (BOOL)featureListStringsRequiredForMediaType:(unsigned char)a0;
+ (id)getPreferredVideoPayloadList:(id)a0 localSupportedPayloads:(id)a1 mediaType:(unsigned char)a2;
+ (BOOL)initializeLocalConfiguration:(id)a0 negotiationData:(id)a1 deviceRole:(int)a2 preferredAudioPayload:(int)a3;
+ (BOOL)isAudioStreamGroup:(unsigned int)a0;
+ (BOOL)isU1StreamGroup:(unsigned int)a0;
+ (id)negotiateVideoMaxResolutionWithEncodeRules:(id)a0 decodeRules:(id)a1 isEncoder:(BOOL)a2;
+ (id)newNegotiatedAudioPayloadsWithLocalPayloads:(id)a0 remotePayloads:(id)a1;
+ (id)preferredPayloadsForMediaType:(unsigned char)a0;
+ (BOOL)selectBestVideoRuleForTransport:(unsigned char)a0 payload:(int)a1 encodingType:(unsigned char)a2 videoSettings:(id)a3 localVideoRuleCollection:(id)a4 remoteVideoRuleCollection:(id)a5;
+ (void)setupNegotiatedAudioPayloads:(id)a0 negotiatedAudioSettings:(id)a1 primaryPayloadPreference:(id)a2;
+ (id)streamGroupIDsWithMediaBlob:(id)a0;
+ (BOOL)v1FeatureListStringsSupportedForMediaType:(unsigned char)a0;

- (void)dealloc;
- (id)negotiationData;
- (id)initWithLocalSettings:(id)a0;
- (id)negotiatedResultsForGroupID:(unsigned int)a0;
- (id)negotiatedResultsForGroupID:(unsigned int)a0 localU1Config:(id)a1 remoteU1Config:(id)a2;
- (id)negotiatedStreamGroupConfigForGroupID:(unsigned int)a0 negotiatedStreamGroupConfigs:(id)a1;
- (BOOL)processRemoteNegotiationData:(id)a0;
- (unsigned int)remoteMaxBandwidthForArbiterMode:(unsigned char)a0 connectionType:(int)a1;
- (BOOL)setUpU1MediaSettings;

@end
