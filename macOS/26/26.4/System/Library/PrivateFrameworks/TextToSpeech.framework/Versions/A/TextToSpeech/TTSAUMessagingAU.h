@class TTSFirstPartyAudioUnit;

@interface TTSAUMessagingAU : NSObject <AUMessageChannel>

@property (copy, nonatomic) id /* block */ hostBlock;
@property (weak, nonatomic) TTSFirstPartyAudioUnit *owningAudioUnit;
@property (copy) id /* block */ callHostBlock;

- (id)echo:(id)a0;
- (void).cxx_destruct;
- (id)callAudioUnit:(id)a0;

@end
