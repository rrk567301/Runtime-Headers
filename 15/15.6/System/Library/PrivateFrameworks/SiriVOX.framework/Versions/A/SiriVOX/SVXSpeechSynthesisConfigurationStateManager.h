@class SVXSpeechSynthesisConfiguration;
@protocol SVXClientAudioSystemServicing;

@interface SVXSpeechSynthesisConfigurationStateManager : NSObject

@property (readonly, nonatomic) SVXSpeechSynthesisConfiguration *currentConfiguration;
@property (retain, nonatomic) id<SVXClientAudioSystemServicing> clientAudioSystemServicing;

- (void).cxx_destruct;
- (char)updateConfiguration:(id)a0;

@end
