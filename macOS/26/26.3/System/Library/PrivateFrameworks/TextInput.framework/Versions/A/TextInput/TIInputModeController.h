@class NSString, NSArray;

@interface TIInputModeController : NSObject {
    NSArray *_supportedInputModeIdentifiers;
    NSArray *_supportedInputModeLanguageAndRegions;
}

@property (copy, nonatomic) NSString *currentLocale;
@property (copy, nonatomic) NSArray *preferredLanguages;
@property (copy, nonatomic) NSArray *enabledInputModes;
@property (copy, nonatomic) NSArray *defaultInputModes;
@property (copy, nonatomic) NSArray *inputModesForTesting;
@property (readonly) NSArray *supportedInputModeIdentifiers;
@property (readonly) NSArray *supportedInputModeLanguageAndRegions;
@property (readonly) NSArray *enabledInputModeIdentifiers;

+ (id)sharedInputModeController;
+ (id)_inputModesForLocale:(id)a0 language:(id)a1 modeFetcher:(id /* block */)a2;

- (BOOL)identifierIsValidSystemInputMode:(id)a0;
- (id)_inputModesFromInputModeConfiguration:(id)a0;
- (id)archivedInputModeConfiguration;
- (id)defaultEnabledInputModesForCurrentLocale;
- (id)_archivedInputModeConfigurationFrom:(id)a0;
- (id)_inputModeConfiguration;
- (id)defaultDictationLanguagesForKeyboardLanguage:(id)a0;
- (void).cxx_destruct;
- (void)setInputModeIdentifiersForTesting:(id)a0;
- (id)transformedInputModesFromInputModes:(id)a0 sourcePlatform:(id)a1 targetPlatform:(id)a2 preferredLanguages:(id)a3 preferredLocale:(id)a4;
- (id)inputModesFromArchivedInputModeConfiguration:(id)a0;
- (id)suggestedDictationLanguageForDeviceLanguage;
- (id)suggestedDictationLanguagesForDeviceLanguage;

@end
