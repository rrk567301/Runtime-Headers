@class TTSSpeechVoice, NSString, _TtC12TextToSpeech22CoreSynthesisVoiceShim, NSArray, AVSpeechSynthesisVoice;

@interface TextToSpeech.CoreSynthesisVoiceShim : NSObject {
    void /* unknown type, empty encoding */ executor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_resourceResolver;
    void /* unknown type, empty encoding */ $__lazy_storage_$_internalResolver;
    void /* unknown type, empty encoding */ $__lazy_storage_$_publicResolver;
}

@property (class, nonatomic, retain) _TtC12TextToSpeech22CoreSynthesisVoiceShim *shared;

- (id)init;
- (void).cxx_destruct;
- (id)voiceWithIdentifier:(id)a0;
- (id)internalVoiceWithIdentifier:(id)a0;
- (void)internalVoiceWithIdentifier:(NSString *)a0 completionHandler:(void (^)(AVSpeechSynthesisVoice *))a1;
- (id)internalVoicesIncludingSiri:(BOOL)a0;
- (void)internalVoicesIncludingSiri:(BOOL)a0 completionHandler:(void (^)(NSArray *))a1;
- (id)publicVoices;
- (void)publicVoicesWithCompletionHandler:(void (^)(NSArray *))a0;
- (void)reloadPublicResolver;
- (id)resourceVoiceWithIdentifier:(id)a0;
- (void)resourceVoiceWithIdentifier:(NSString *)a0 completionHandler:(void (^)(TTSSpeechVoice *))a1;
- (id)resourceVoicesWithOnlyInstalled:(BOOL)a0;
- (void)resourceVoicesWithOnlyInstalled:(BOOL)a0 completionHandler:(void (^)(NSArray *))a1;
- (id)resourcesWithLanguageCode:(id)a0;
- (void)resourcesWithLanguageCode:(NSString *)a0 completionHandler:(void (^)(NSArray *))a1;
- (void)voiceWithIdentifier:(NSString *)a0 completionHandler:(void (^)(AVSpeechSynthesisVoice *))a1;
- (id)voiceWithLanguageCode:(id)a0;
- (void)voiceWithLanguageCode:(NSString *)a0 completionHandler:(void (^)(AVSpeechSynthesisVoice *))a1;

@end
