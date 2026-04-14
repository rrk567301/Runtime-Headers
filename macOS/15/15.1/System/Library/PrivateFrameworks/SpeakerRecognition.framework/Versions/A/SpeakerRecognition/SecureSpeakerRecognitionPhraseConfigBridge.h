@class NSString;

@interface SecureSpeakerRecognitionPhraseConfigBridge : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) float satThreshold;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 satThreshold:(float)a1;

@end
