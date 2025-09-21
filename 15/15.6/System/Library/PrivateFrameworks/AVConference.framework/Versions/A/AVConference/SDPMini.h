@class NSString, NSDictionary, NSMutableDictionary, NSMutableArray, NSNumber;

@interface SDPMini : NSObject {
    NSString *_sdpUsername;
    NSMutableDictionary *_audioParameters;
    NSNumber *videoRTPID;
    NSString *basebandCodecType;
    NSNumber *basebandCodecSampleRate;
    NSMutableDictionary *_mediaLines;
}

@property (retain, nonatomic) NSString *origin;
@property (readonly, nonatomic) NSMutableArray *audioPayloads;
@property (readonly, nonatomic) NSMutableArray *secondaryAudioPayloads;
@property (retain, nonatomic) NSString *sessionIP;
@property (retain, nonatomic) NSNumber *audioRTPPort;
@property (retain, nonatomic) NSNumber *audioRTCPPort;
@property (retain, nonatomic) NSNumber *audioRTPID;
@property (nonatomic) char allowRTCPFB;
@property (retain, nonatomic) NSNumber *answerBandwidth;
@property (retain, nonatomic) NSNumber *maxBandwidth;
@property (nonatomic) char allowsDynamicMaxBitrate;
@property (retain, nonatomic) NSDictionary *featureListDict;
@property (nonatomic) char allowsContentsChangeWithAspectPreservation;
@property (retain, nonatomic) NSNumber *aacBlockSize;
@property (retain, nonatomic) NSNumber *audioUnitModel;
@property (nonatomic) char allowAudioRecording;

+ (char)setPayload:(int)a0 mediaLine:(id)a1;

- (void)dealloc;
- (id)init;
- (id)initWithString:(id)a0;
- (id)SDPUsername;
- (void)parseMediaLine:(id)a0;
- (void)parseBandwidth:(id)a0;
- (int)rulesFramerate:(int)a0;
- (void)addMediaLine:(id)a0 mediaType:(int)a1;
- (id)composeAudioFMTPForPayload:(id)a0;
- (id)composeAudioString;
- (id)composeBandwidthString;
- (id)composeFLSString;
- (id)composeSessionString;
- (void)createVideoImageAttr:(int)a0 direction:(int)a1 dimensions:(struct imageTag { int x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; int x8; } *)a2 count:(int)a3;
- (char)getBasebandCodecType:(id *)a0 sampleRate:(id *)a1;
- (id)getMediaLineForType:(int)a0;
- (void)getNegotiatedResolutionForPayload:(int)a0 forInterface:(int)a1 withRule:(id)a2 direction:(int)a3 result:(struct imageTag { int x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; int x8; } *)a4 remoteSupportsHD:(char)a5 screenSharing:(char)a6;
- (char)getUseSbr:(char *)a0 blockSize:(int *)a1 forAACFormat:(int)a2;
- (id)mediaTypeToString:(int)a0;
- (void)parseAudioFormatAttribute:(id)a0;
- (void)parseAudioMediaAttributes:(id)a0;
- (id)parseIP:(id)a0;
- (id)parseRTCPPort:(id)a0;
- (id)parseRTPID:(id)a0;
- (void)parseSDPFromString:(id)a0;
- (void)parseSessionAttributes:(id)a0;
- (void)rulesImageSizeForExternalPayload:(int)a0 pWidth:(int *)a1 pHeight:(int *)a2;
- (void)setBasebandCodecType:(id)a0 sampleRate:(id)a1;
- (void)setUseSbr:(char)a0 blockSize:(int)a1 forAACFormat:(int)a2;
- (char)setVideoPayloads:(int *)a0 count:(int)a1;
- (void)setVideoRTCPFB:(char)a0 useNACK:(char)a1;
- (id)toStringWithVideoEnabled:(char)a0;

@end
