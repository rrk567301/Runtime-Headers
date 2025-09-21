@class VCVideoRuleCollections, NSMutableDictionary, NSMutableSet;

@interface VCMediaNegotiatorResultsVideo : NSObject

@property (nonatomic) BOOL isSupported;
@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic) BOOL isRTCPFBEnabled;
@property (readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (retain, nonatomic) NSMutableDictionary *featureStrings;
@property (retain, nonatomic) NSMutableDictionary *parameterSets;
@property (nonatomic) unsigned int customVideoWidth;
@property (nonatomic) unsigned int customVideoHeight;
@property (nonatomic) unsigned int tilesPerFrame;
@property (nonatomic) BOOL ltrpEnabled;
@property (readonly, nonatomic) NSMutableSet *pixelFormats;
@property (readonly, nonatomic) NSMutableSet *hdrModesNegotiated;
@property (nonatomic) BOOL fecEnabled;
@property (nonatomic) BOOL rtxEnabled;
@property (nonatomic) BOOL blackFrameOnClearScreenEnabled;
@property (nonatomic) BOOL foveationIsSupported;
@property (nonatomic) long long cipherSuite;
@property (nonatomic) int videoFrameMetadataSupportedVersion;
@property (nonatomic) BOOL afbRxFrontCameraEnabled;
@property (nonatomic) BOOL afbRxBackCameraEnabled;
@property (nonatomic) int remoteDeviceInitialOrientation;
@property (nonatomic) BOOL enableInterleavedEncoding;

- (void)dealloc;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)addFeatureString:(id)a0 payload:(int)a1;
- (void)addNegotiatedHDRMode:(id)a0;
- (void)addParameterSet:(id)a0 payload:(int)a1;
- (void)addPixelFormatSet:(id)a0;
- (void)addVideoRules:(id)a0 transportType:(unsigned char)a1 payload:(int)a2 encodingType:(unsigned char)a3;

@end
