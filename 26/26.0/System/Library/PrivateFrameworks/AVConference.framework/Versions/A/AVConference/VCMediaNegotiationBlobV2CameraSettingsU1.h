@class VCVideoRuleCollections, NSMutableArray;

@interface VCMediaNegotiationBlobV2CameraSettingsU1 : PBCodable <NSCopying> {
    struct { unsigned char backCameraFullScreenCaptureSupported : 1; unsigned char cipherSuites : 1; unsigned char deviceOrientation : 1; unsigned char frontCameraFullScreenCaptureSupported : 1; unsigned char landscapeAspectRatioX : 1; unsigned char landscapeAspectRatioY : 1; unsigned char mismatchedDisplayAspectRatioX : 1; unsigned char mismatchedDisplayAspectRatioY : 1; unsigned char mismatchedFullScreenDisplayAspectRatioX : 1; unsigned char mismatchedFullScreenDisplayAspectRatioY : 1; unsigned char portraitAspectRatioX : 1; unsigned char portraitAspectRatioY : 1; unsigned char rtpSSRC : 1; unsigned char videoFrameMetadataSupportedVersion : 1; } _has;
}

@property (readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } orientationMismatchDisplayRatio;
@property (nonatomic) BOOL hasRtpSSRC;
@property (nonatomic) unsigned int rtpSSRC;
@property (retain, nonatomic) NSMutableArray *payloads;
@property (nonatomic) BOOL hasLandscapeAspectRatioX;
@property (nonatomic) unsigned int landscapeAspectRatioX;
@property (nonatomic) BOOL hasLandscapeAspectRatioY;
@property (nonatomic) unsigned int landscapeAspectRatioY;
@property (nonatomic) BOOL hasPortraitAspectRatioX;
@property (nonatomic) unsigned int portraitAspectRatioX;
@property (nonatomic) BOOL hasPortraitAspectRatioY;
@property (nonatomic) unsigned int portraitAspectRatioY;
@property (nonatomic) BOOL hasMismatchedDisplayAspectRatioX;
@property (nonatomic) unsigned int mismatchedDisplayAspectRatioX;
@property (nonatomic) BOOL hasMismatchedDisplayAspectRatioY;
@property (nonatomic) unsigned int mismatchedDisplayAspectRatioY;
@property (nonatomic) BOOL hasCipherSuites;
@property (nonatomic) int cipherSuites;
@property (nonatomic) BOOL hasMismatchedFullScreenDisplayAspectRatioX;
@property (nonatomic) unsigned int mismatchedFullScreenDisplayAspectRatioX;
@property (nonatomic) BOOL hasMismatchedFullScreenDisplayAspectRatioY;
@property (nonatomic) unsigned int mismatchedFullScreenDisplayAspectRatioY;
@property (nonatomic) BOOL hasFrontCameraFullScreenCaptureSupported;
@property (nonatomic) unsigned int frontCameraFullScreenCaptureSupported;
@property (nonatomic) BOOL hasBackCameraFullScreenCaptureSupported;
@property (nonatomic) unsigned int backCameraFullScreenCaptureSupported;
@property (nonatomic) BOOL hasDeviceOrientation;
@property (nonatomic) int deviceOrientation;
@property (nonatomic) BOOL hasVideoFrameMetadataSupportedVersion;
@property (nonatomic) unsigned int videoFrameMetadataSupportedVersion;

+ (int)deviceOrientationFromNegotiationDeviceOrientation:(int)a0;
+ (int)negotiationDeviceOrientationFromDeviceOrientation:(int)a0;
+ (Class)payloadsType;

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
- (int)StringAsCipherSuites:(id)a0;
- (int)StringAsDeviceOrientation:(id)a0;
- (void)addPayloads:(id)a0;
- (BOOL)addVideoRules:(id)a0 encodingType:(unsigned char)a1 payload:(int)a2 videoRuleCollections:(id)a3;
- (void)appendFullScreenFeatureString:(id)a0 screenSize:(struct CGSize { double x0; double x1; })a1;
- (void)aspectRatioPortrait:(struct CGSize { double x0; double x1; } *)a0 aspectRatioLandscape:(struct CGSize { double x0; double x1; } *)a1 mismatchFullScreenAspectRatios:(struct tagVCAspectRatios { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 screenSize:(struct CGSize { double x0; double x1; })a3;
- (void)aspectRatioPortrait:(struct CGSize { double x0; double x1; } *)a0 aspectRatioLandscape:(struct CGSize { double x0; double x1; } *)a1 orientationMismatchAspectRatioLandscape:(struct CGSize { double x0; double x1; } *)a2 orientationMismatchAspectRatioPortrait:(struct CGSize { double x0; double x1; } *)a3 screenSize:(struct CGSize { double x0; double x1; })a4;
- (id)cipherSuitesAsString:(int)a0;
- (void)clearPayloads;
- (id)deviceOrientationAsString:(int)a0;
- (id)initWithSSRC:(unsigned int)a0 videoRuleCollections:(id)a1 screenSize:(struct CGSize { double x0; double x1; })a2 aspectRatioPortrait:(struct CGSize { double x0; double x1; })a3 aspectRatioLandscape:(struct CGSize { double x0; double x1; })a4 orientationMismatchAspectRatioLandscape:(struct CGSize { double x0; double x1; })a5 featureListStrings:(id)a6 u1AuthTagEnabled:(BOOL)a7 videoFrameMetadataSupportedVersion:(int)a8;
- (id)payloadsAtIndex:(unsigned long long)a0;
- (unsigned long long)payloadsCount;
- (void)printWithLogFile:(void *)a0 prefix:(id)a1 screenSize:(struct CGSize { double x0; double x1; })a2;
- (id)rulesForEncodeType:(unsigned char)a0 paylaod:(int)a1 videoRuleCollection:(id)a2;
- (BOOL)setupVideoRuleCollection:(id)a0 featureListStrings:(id)a1;

@end
