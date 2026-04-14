@class NSString, SASSpeechRecognized, AFSpeechInfo;

@interface _AFSpeechInfoMutation : NSObject <AFSpeechInfoMutating> {
    AFSpeechInfo *_baseModel;
    SASSpeechRecognized *_speechRecognizedCommand;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSpeechRecognizedCommand : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setSpeechRecognizedCommand:(id)a0;

@end
