@class SVXSpeechSynthesisUtils;
@protocol SVXResourceURLSupplier;

@interface SVXSoundUtils : NSObject {
    SVXSpeechSynthesisUtils *_speechSynthesisUtils;
    id<SVXResourceURLSupplier> _resourceURLSupplier;
}

- (void).cxx_destruct;
- (id)init;
- (id)createAudioPlaybackRequestFromID:(long long)a0 preferences:(id)a1;
- (long long)getIDFromAudioPlaybackRequest:(id)a0;
- (id)initWithSpeechSynthesisUtils:(id)a0 resourceURLSupplier:(id)a1;

@end
