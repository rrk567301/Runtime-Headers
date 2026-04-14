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

+ (id)_inputModesForLocale:(id)a0 language:(id)a1 modeFetcher:(id /* block */)a2;
+ (id)sharedInputModeController;

- (BOOL)identifierIsValidSystemInputMode:(id)a0;
- (id)suggestedDictationLanguagesForDeviceLanguage;
- (id)_archivedInputModeConfigurationFrom:(id)a0;
- (id)archivedInputModeConfiguration;
- (id)defaultDictationLanguagesForKeyboardLanguage:(id)a0;
- (void).cxx_destruct;
- (id)_inputModeConfiguration;
- (void)setInputModeIdentifiersForTesting:(id)a0;
- (id)suggestedDictationLanguageForDeviceLanguage;
- (id)inputModesFromArchivedInputModeConfiguration:(id)a0;
- (id)defaultEnabledInputModesForCurrentLocale;
- (id)_inputModesFromInputModeConfiguration:(id)a0;
- (id)transformedInputModesFromInputModes:(id)a0 sourcePlatform:(id)a1 targetPlatform:(id)a2 preferredLanguages:(id)a3 preferredLocale:(id)a4;

@end
