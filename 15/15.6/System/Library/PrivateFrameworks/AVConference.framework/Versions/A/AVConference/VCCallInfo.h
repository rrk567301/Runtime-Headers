@class NSString, SDPMini;

@interface VCCallInfo : NSObject {
    char is4x;
    double firstDegradedMeasure;
    double videoDegradedThreshold;
    double _videoNearDegradedThreshold;
}

@property unsigned int callID;
@property (nonatomic) unsigned int auNumber;
@property (nonatomic) unsigned int maxBandwidth;
@property (nonatomic) unsigned int cellBandwidth;
@property (copy, nonatomic) NSString *participantID;
@property (readonly, nonatomic) char isHDVideoSupported;
@property (nonatomic) char isPreLionOS;
@property (nonatomic) char isVideoQualityDegraded;
@property (nonatomic) char videoIsPaused;
@property (retain, nonatomic) NSString *sdpString;
@property (retain, nonatomic) SDPMini *sdp;
@property (readonly, nonatomic) char requiresImplicitFeatureString;
@property (readonly, nonatomic) char isIOS;
@property (readonly, nonatomic) char usesInitialFECImplementation;
@property (nonatomic) char supportsDynamicMaxBitrate;
@property (nonatomic) char supportsSKEOptimization;
@property (readonly, nonatomic) char supportsSpecialAACBundle;
@property (nonatomic) unsigned int visibleRectCropping;
@property (readonly, nonatomic) char useNewPLCalc;
@property (nonatomic) unsigned char u8Version;
@property (readonly) char supportsDynamicContentsRectWithAspectPreservation;
@property (copy, nonatomic) NSString *frameworkVersion;
@property (copy, nonatomic) NSString *OSVersion;
@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) char isVideoQualityNearDegraded;

+ (unsigned char)getVCCurrentVersion;

- (void)dealloc;
- (id)init;
- (void)setUserAgent:(id)a0;
- (struct VoiceIOFarEndVersionInfo { unsigned char x0[64]; unsigned char x1[64]; unsigned int x2; })audioVersionInfo:(char)a0;
- (char)supportSDPCompression;
- (char)updateWithLastDecodedFrameTime:(double)a0 time:(double)a1;

@end
