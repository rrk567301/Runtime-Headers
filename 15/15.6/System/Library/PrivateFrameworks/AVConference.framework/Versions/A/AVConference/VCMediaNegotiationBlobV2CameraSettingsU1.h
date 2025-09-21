@class VCVideoRuleCollections, NSMutableArray;

@interface VCMediaNegotiationBlobV2CameraSettingsU1 : PBCodable <NSCopying> {
    struct { unsigned char cipherSuites : 1; unsigned char landscapeAspectRatioX : 1; unsigned char landscapeAspectRatioY : 1; unsigned char mismatchedDisplayAspectRatioX : 1; unsigned char mismatchedDisplayAspectRatioY : 1; unsigned char portraitAspectRatioX : 1; unsigned char portraitAspectRatioY : 1; unsigned char rtpSSRC : 1; } _has;
}

@property (readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } orientationMismatchDisplayRatio;
@property (nonatomic) char hasRtpSSRC;
@property (nonatomic) unsigned int rtpSSRC;
@property (retain, nonatomic) NSMutableArray *payloads;
@property (nonatomic) char hasLandscapeAspectRatioX;
@property (nonatomic) unsigned int landscapeAspectRatioX;
@property (nonatomic) char hasLandscapeAspectRatioY;
@property (nonatomic) unsigned int landscapeAspectRatioY;
@property (nonatomic) char hasPortraitAspectRatioX;
@property (nonatomic) unsigned int portraitAspectRatioX;
@property (nonatomic) char hasPortraitAspectRatioY;
@property (nonatomic) unsigned int portraitAspectRatioY;
@property (nonatomic) char hasMismatchedDisplayAspectRatioX;
@property (nonatomic) unsigned int mismatchedDisplayAspectRatioX;
@property (nonatomic) char hasMismatchedDisplayAspectRatioY;
@property (nonatomic) unsigned int mismatchedDisplayAspectRatioY;
@property (nonatomic) char hasCipherSuites;
@property (nonatomic) int cipherSuites;

+ (Class)payloadsType;

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
- (int)StringAsCipherSuites:(id)a0;
- (void)addPayloads:(id)a0;
- (char)addVideoRules:(id)a0 encodingType:(unsigned char)a1 payload:(int)a2 videoRuleCollections:(id)a3;
- (void)aspectRatioPortrait:(struct CGSize { double x0; double x1; } *)a0 aspectRatioLandscape:(struct CGSize { double x0; double x1; } *)a1 orientationMismatchAspectRatioLandscape:(struct CGSize { double x0; double x1; } *)a2 orientationMismatchAspectRatioPortrait:(struct CGSize { double x0; double x1; } *)a3 screenSize:(struct CGSize { double x0; double x1; })a4;
- (id)cipherSuitesAsString:(int)a0;
- (void)clearPayloads;
- (id)initWithSSRC:(unsigned int)a0 videoRuleCollections:(id)a1 screenSize:(struct CGSize { double x0; double x1; })a2 aspectRatioPortrait:(struct CGSize { double x0; double x1; })a3 aspectRatioLandscape:(struct CGSize { double x0; double x1; })a4 orientationMismatchAspectRatioLandscape:(struct CGSize { double x0; double x1; })a5 featureListStrings:(id)a6 u1AuthTagEnabled:(char)a7;
- (id)payloadsAtIndex:(unsigned long long)a0;
- (unsigned long long)payloadsCount;
- (void)printWithLogFile:(void *)a0 prefix:(id)a1 screenSize:(struct CGSize { double x0; double x1; })a2;
- (id)rulesForEncodeType:(unsigned char)a0 paylaod:(int)a1 videoRuleCollection:(id)a2;
- (char)setupVideoRuleCollection:(id)a0 featureListStrings:(id)a1;

@end
