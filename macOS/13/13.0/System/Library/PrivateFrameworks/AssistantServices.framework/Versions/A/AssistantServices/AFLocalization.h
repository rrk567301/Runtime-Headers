@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AFLocalization : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tables;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)localizedStringForKey:(id)a0 table:(id)a1 bundle:(id)a2 languageCode:(id)a3;
- (id)localizedUIUtteranceForKey:(id)a0 languageCode:(id)a1;
- (id)_relevantTablesForTableName:(id)a0 tableExtension:(id)a1 bundle:(id)a2;
- (id)_localizedStringForKey:(id)a0 tables:(id)a1 localizations:(id)a2 bundle:(id)a3;
- (id)localizedStringForKey:(id)a0 gender:(long long)a1 table:(id)a2 bundle:(id)a3 languageCode:(id)a4;
- (id)longDisplayNameInLanguage:(id)a0 forSiriLanguage:(id)a1;
- (id)compactDisplayNameInLanguage:(id)a0 forSiriLanguage:(id)a1;
- (id)localizedCompactNameForSiriLanguage:(id)a0 inDisplayLanguage:(id)a1;
- (id)localizedNameForSiriLanguage:(id)a0 inDisplayLanguage:(id)a1;
- (id)localizedNameOfOutputVoiceWithIdentifier:(id)a0 inDisplayLanguage:(id)a1;
- (id)localizedNameOfOutputVoice:(id)a0 inDisplayLanguage:(id)a1;
- (id)localizedGenderOfOutputVoice:(id)a0 inDisplayLanguage:(id)a1;
- (id)localizedNameOfVoiceGender:(long long)a0 inDisplayLanguage:(id)a1;
- (id)outputVoiceColorDescriptorForOutputLanguageCode:(id)a0 voiceName:(id)a1;
- (id)outputVoiceDescriptorForOutputLanguageCode:(id)a0 voiceName:(id)a1;
- (id)dialectsMap;
- (id)allOutputVoiceIdentifiersForSiriLanguage:(id)a0;
- (id)defaultOutputVoiceForSiriSessionLanguage:(id)a0;
- (id)loadInfoForVoicesWithLanguageCode:(id)a0;
- (id)_voicesFromVoiceMapWithLanguage:(id)a0;
- (id)_getVoiceOrdering;
- (struct { id x0; id x1; id x2; id x3; })_voiceMaps;
- (id)voiceNamesForOutputLanguageCode:(id)a0 gender:(long long)a1;
- (id /* block */)outputVoiceComparator;
- (id)voiceSimilarToVoice:(id)a0 inSiriSessionLanguage:(id)a1;

@end
