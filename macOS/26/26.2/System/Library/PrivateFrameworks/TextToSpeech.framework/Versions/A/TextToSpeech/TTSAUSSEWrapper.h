@class AUAudioUnit;

@interface TTSAUSSEWrapper : NSObject

@property (retain, nonatomic) AUAudioUnit *audioUnit;

+ (id)makeAU:(id)a0;

- (void)synthesizeSpeechRequest:(id)a0;
- (void).cxx_destruct;
- (void)cancelSpeechRequest;
- (id)initWithAudioUnit:(id)a0;

@end
