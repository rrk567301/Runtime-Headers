@class NSString, AXCVoiceSelection;

@interface _TtCE22AccessibilityUtilitiesCSo10AXSettings13SpokenContent : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_resolver;
    void /* unknown type, empty encoding */ _$voiceSelectionsByLanguage_Storage;
    void /* unknown type, empty encoding */ _$macroLanguageDisambiguations_Storage;
    void /* unknown type, empty encoding */ _$internalShowSiriTechnologyTypesInSettings_Storage;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ decoder;
    void /* unknown type, empty encoding */ store;
}

@property (nonatomic) float quickSpeakSpeakingRate;

- (id)init;
- (void).cxx_destruct;
- (float)quickSpeakSpeakingRateForLanguage:(id)a0;
- (void)setForLanguage:(NSString *)a0 voiceSelection:(AXCVoiceSelection *)a1 completionHandler:(void (^)(void))a2;
- (void)setQuickSpeakSpeakingRate:(float)a0 forLanguage:(id)a1;
- (void)setWithVoiceId:(NSString *)a0 forLanguage:(NSString *)a1 completionHandler:(void (^)(void))a2;
- (void)speechVoiceIdentifierForLanguage:(NSString *)a0 exists:(BOOL *)a1 completionHandler:(void (^)(NSString *))a2;
- (void)voiceSelectionForLanguage:(NSString *)a0 completionHandler:(void (^)(AXCVoiceSelection *))a1;

@end
