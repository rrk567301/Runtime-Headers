@class AudioCaptureConfig, PreKeywordSilenceConfig, PostKeywordSilenceConfig, NSString, DuringKeywordSilenceConfig;

@interface DecoderConfig : NSObject

@property (nonatomic) BOOL useChecker;
@property (nonatomic, retain) PreKeywordSilenceConfig *preKeywordSilence;
@property (nonatomic, retain) DuringKeywordSilenceConfig *duringKeywordSilence;
@property (nonatomic, retain) PostKeywordSilenceConfig *postKeywordSilence;
@property (nonatomic, retain) AudioCaptureConfig *audioCapture;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
