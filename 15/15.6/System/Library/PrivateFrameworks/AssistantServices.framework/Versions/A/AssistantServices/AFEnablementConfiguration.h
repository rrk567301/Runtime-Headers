@class NSDictionary;

@interface AFEnablementConfiguration : NSObject

@property (readonly, nonatomic) char requiresVoiceSelection;
@property (readonly, nonatomic) NSDictionary *voiceCountForRecognitionLanguage;
@property (readonly, nonatomic) char voiceSelectionAllowsRandomSelection;
@property (readonly, retain, nonatomic) id /* block */ completionLoggingBlock;

- (void).cxx_destruct;
- (id)initWithRequiresVoiceSelection:(char)a0 voiceSelectionAllowsChooseForMe:(char)a1 voiceCountForRecognitionLanguage:(id)a2 completionLoggingBlock:(id /* block */)a3;
- (char)requiresVoiceSelectionForRecognitionLanguage:(id)a0;

@end
