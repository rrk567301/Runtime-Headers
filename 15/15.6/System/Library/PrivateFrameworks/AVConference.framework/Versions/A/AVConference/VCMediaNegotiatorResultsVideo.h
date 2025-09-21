@class VCVideoRuleCollections, NSMutableDictionary, NSMutableSet;

@interface VCMediaNegotiatorResultsVideo : NSObject

@property (nonatomic) char isSupported;
@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic) char isRTCPFBEnabled;
@property (readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (retain, nonatomic) NSMutableDictionary *featureStrings;
@property (retain, nonatomic) NSMutableDictionary *parameterSets;
@property (nonatomic) unsigned int customVideoWidth;
@property (nonatomic) unsigned int customVideoHeight;
@property (nonatomic) unsigned int tilesPerFrame;
@property (nonatomic) char ltrpEnabled;
@property (readonly, nonatomic) NSMutableSet *pixelFormats;
@property (readonly, nonatomic) NSMutableSet *hdrModesNegotiated;
@property (nonatomic) char fecEnabled;
@property (nonatomic) char rtxEnabled;
@property (nonatomic) char blackFrameOnClearScreenEnabled;
@property (nonatomic) char foveationIsSupported;
@property (nonatomic) long long cipherSuite;

- (void)dealloc;
- (id)init;
- (char)isEqual:(id)a0;
- (void)addFeatureString:(id)a0 payload:(int)a1;
- (void)addNegotiatedHDRMode:(id)a0;
- (void)addParameterSet:(id)a0 payload:(int)a1;
- (void)addPixelFormatSet:(id)a0;
- (void)addVideoRules:(id)a0 transportType:(unsigned char)a1 payload:(int)a2 encodingType:(unsigned char)a3;

@end
