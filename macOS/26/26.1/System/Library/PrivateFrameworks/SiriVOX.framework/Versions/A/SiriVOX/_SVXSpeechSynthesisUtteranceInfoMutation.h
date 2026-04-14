@class NSString, SVXSpeechSynthesisUtteranceInfo, NSArray;

@interface _SVXSpeechSynthesisUtteranceInfoMutation : NSObject <SVXSpeechSynthesisUtteranceInfoMutating> {
    SVXSpeechSynthesisUtteranceInfo *_baseModel;
    NSString *_utterance;
    NSArray *_wordTimings;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasUtterance : 1; unsigned char hasWordTimings : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)setWordTimings:(id)a0;
- (void)setUtterance:(id)a0;
- (id)generate;
- (id)initWithBaseModel:(id)a0;

@end
