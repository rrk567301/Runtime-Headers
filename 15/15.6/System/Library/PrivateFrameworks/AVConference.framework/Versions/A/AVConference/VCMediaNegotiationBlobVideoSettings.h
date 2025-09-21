@class NSMutableArray;

@interface VCMediaNegotiationBlobVideoSettings : PBCodable <NSCopying> {
    struct { unsigned char customVideoHeight : 1; unsigned char customVideoWidth : 1; unsigned char hdrModesSupported : 1; unsigned char pixelFormats : 1; unsigned char tilesPerFrame : 1; unsigned char blackFrameOnClearScreenEnabled : 1; unsigned char fecEnabled : 1; unsigned char foveationSupported : 1; unsigned char ltrpEnabled : 1; unsigned char rtxEnabled : 1; } _has;
}

@property (nonatomic) unsigned int rtpSSRC;
@property (nonatomic) char allowRTCPFB;
@property (retain, nonatomic) NSMutableArray *videoPayloadCollections;
@property (nonatomic) char hasCustomVideoWidth;
@property (nonatomic) unsigned int customVideoWidth;
@property (nonatomic) char hasCustomVideoHeight;
@property (nonatomic) unsigned int customVideoHeight;
@property (nonatomic) char hasTilesPerFrame;
@property (nonatomic) unsigned int tilesPerFrame;
@property (nonatomic) char hasLtrpEnabled;
@property (nonatomic) char ltrpEnabled;
@property (nonatomic) char hasPixelFormats;
@property (nonatomic) unsigned int pixelFormats;
@property (nonatomic) char hasHdrModesSupported;
@property (nonatomic) unsigned int hdrModesSupported;
@property (nonatomic) char hasFecEnabled;
@property (nonatomic) char fecEnabled;
@property (nonatomic) char hasRtxEnabled;
@property (nonatomic) char rtxEnabled;
@property (nonatomic) char hasBlackFrameOnClearScreenEnabled;
@property (nonatomic) char blackFrameOnClearScreenEnabled;
@property (nonatomic) char hasFoveationSupported;
@property (nonatomic) char foveationSupported;

+ (unsigned int)hdrModesBitmapWithSupportedModes:(id)a0;
+ (unsigned int)storePixelFormatsInBitMap:(id)a0;
+ (Class)videoPayloadCollectionsType;

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
- (id)videoPayloadCollectionsAtIndex:(unsigned long long)a0;
- (void)addVideoPayloadCollections:(id)a0;
- (void)checkAndInsertRuleWithWidth:(unsigned int)a0 height:(unsigned int)a1 framerate:(int)a2 payload:(int)a3 priority:(double)a4 negotiationBitfield:(unsigned int *)a5 negotiationBit:(unsigned int)a6 rules:(id)a7 isCellular16x9Capable:(char)a8;
- (void)clearVideoPayloadCollections;
- (id)getPayloadSettingsForPayload:(int)a0;
- (id)initWithSSRC:(unsigned int)a0 allowRTCPFB:(char)a1 videoRuleCollections:(id)a2 featureStrings:(id)a3 isCellular16x9Capable:(char)a4 tilesPerFrame:(unsigned int)a5 ltrpEnabled:(char)a6 pixelFormats:(id)a7 hdrModesSupported:(id)a8;
- (id)initWithScreenSSRC:(unsigned int)a0 allowRTCPFB:(char)a1 videoRuleCollections:(id)a2 featureStrings:(id)a3 isCellular16x9Capable:(char)a4 customVideoWidth:(unsigned int)a5 customVideoHeight:(unsigned int)a6 tilesPerFrame:(unsigned int)a7 ltrpEnabled:(char)a8 pixelFormats:(id)a9 hdrModesSupported:(id)a10 fecEnabled:(char)a11 rtxEnabled:(char)a12 blackFrameOnClearScreenEnabled:(char)a13 foveationSupported:(char)a14;
- (id)newCameraConfiguration;
- (id)newFeatureStrings;
- (id)newScreenConfigurationWithCameraConfiguration:(id)a0;
- (id)newVideoRuleCollectionsForScreen:(char)a0 isCellular16x9Capable:(char)a1 isLocalConfig:(char)a2;
- (id)parameterSetStringFromPayloadSettings:(id)a0;
- (void)prepareFormatString:(id)a0 format:(id)a1 formatIndex:(unsigned int)a2 preferredFormat:(unsigned int)a3;
- (void)printScreenWithLogFile:(void *)a0;
- (void)printVideoWithLogFile:(void *)a0;
- (char)setVideoRuleCollections:(id)a0 featureStrings:(id)a1 isScreen:(char)a2 isCellular16x9Capable:(char)a3;
- (unsigned long long)videoPayloadCollectionsCount;

@end
