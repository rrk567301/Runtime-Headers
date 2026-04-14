@class SVXSpeechSynthesisConfiguration;
@protocol SVXClientAudioSystemServicing;

@interface SVXSpeechSynthesisConfigurationStateManager : NSObject

@property (readonly, nonatomic) SVXSpeechSynthesisConfiguration *currentConfiguration;
@property (retain, nonatomic) id<SVXClientAudioSystemServicing> clientAudioSystemServicing;

- (BOOL)updateConfiguration:(id)a0;
- (void).cxx_destruct;

@end
