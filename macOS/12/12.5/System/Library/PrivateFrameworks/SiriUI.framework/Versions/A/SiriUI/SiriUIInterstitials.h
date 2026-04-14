@interface SiriUIInterstitials : NSObject

+ (id)getLanguageCodeForVoice:(id)a0;
+ (id)interstitialCacheFolderURL;
+ (void)synthesizeInterstitialStringsForLanguageIdentifier:(id)a0 andGender:(long long)a1 toFolder:(id)a2 completion:(id /* block */)a3;
+ (id)interstitialStringsForLanguageIdentifier:(id)a0;
+ (id)speechSynthesizerWithLanguageIdentifier:(id)a0 andGender:(long long)a1;
+ (void)updateBridgeOSInterstitialsWithCompletion:(id /* block */)a0;

@end
