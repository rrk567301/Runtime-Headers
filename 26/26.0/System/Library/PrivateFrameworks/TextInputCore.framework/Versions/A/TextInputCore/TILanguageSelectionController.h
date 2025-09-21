@class NSArray, NSMutableDictionary, TIInputMode, NSDictionary, NSMutableArray, TILanguageModelAdaptationContext;
@protocol TIMultilingualPreferenceProviding, TILanguageSelectionControllerDelegate, TILanguageLikelihoodModeling;

@interface TILanguageSelectionController : NSObject {
    struct vector<TITokenID, std::allocator<TITokenID>> { struct TITokenID *__begin_; struct TITokenID *__end_; struct TITokenID *__cap_; } m_buffered_tokens;
}

@property (readonly, nonatomic) id<TILanguageLikelihoodModeling> languageLikelihoodModel;
@property (readonly, nonatomic) id<TIMultilingualPreferenceProviding> preferenceProvider;
@property (retain, nonatomic) TIInputMode *primaryInputMode;
@property (retain, nonatomic) TIInputMode *preferredSecondaryInputMode;
@property (retain, nonatomic) NSArray *preferredAdditionalInputModes;
@property (retain, nonatomic) TIInputMode *inferredSecondaryInputMode;
@property (retain, nonatomic) NSArray *inferredAdditionalInputModes;
@property (retain, nonatomic) NSArray *userEnabledInputModes;
@property (retain, nonatomic) NSArray *activeInputModes;
@property (readonly, nonatomic) NSMutableDictionary *inputModeProbabilities;
@property (copy, nonatomic) NSDictionary *referenceInputModeProbabilities;
@property (readonly, nonatomic) NSMutableArray *bufferedTokenStrings;
@property (nonatomic) id<TILanguageSelectionControllerDelegate> delegate;
@property (retain, nonatomic) TILanguageModelAdaptationContext *adaptationContext;

+ (id)inferInputModeForLanguage:(id)a0 enabled:(id)a1;
+ (id)inferSecondaryInputModeForPrimary:(id)a0 enabled:(id)a1 isSimulation:(BOOL)a2;
+ (id)sharedLanguageLikelihoodModel;
+ (id)inferAdditionalInputModesForPrimary:(id)a0;
+ (void)reportTypedTokens:(const void *)a0 activeInputModes:(id)a1;
+ (id)inferSecondaryInputModeForPrimary:(id)a0 enabled:(id)a1 isSimulation:(BOOL)a2 enabledExcludingPreferredLanguages:(id)a3;
+ (id)multilingualInputModesForInputModes:(id)a0;
+ (id)inputModesForLanguageIdentifiers:(id)a0;
+ (id)inputModeForLanguageIdentifier:(id)a0;

- (void)rebalanceMultipleInputModeWeights:(void *)a0;
- (id)fetchUserEnabledInputModesExcludingPreferredLanguages;
- (void)dealloc;
- (id)fetchUserEnabledInputModes;
- (void)addTokenString:(id)a0 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 context:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a2 contextLength:(unsigned long long)a3;
- (BOOL)didProbabilityChangeSignificantly;
- (id)initWithLanguageLikelihoodModel:(id)a0 preferenceProvider:(id)a1;
- (float)priorProbabilityForInputMode:(id)a0;
- (id)secondaryInputModeForUpdatedPrimaryInputMode:(id)a0;
- (id)init;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; float *x2; })retreiveExcessInputModeWeightRatiosFromCurrentWeights:(void *)a0;
- (void)appleKeyboardsPreferencesChanged:(id)a0;
- (void)updateActiveInputModesSuppressingNotification:(BOOL)a0;
- (BOOL)updateInputModeProbabilities;
- (void)feedBufferedTokenStringsToModel;
- (BOOL)didUpdatedInputModesChange:(id)a0;
- (void)removeTokenString:(id)a0 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 context:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a2 contextLength:(unsigned long long)a3;
- (id)fetchPreferredAdditionalInputModes;
- (void)appleKeyboardsInternalSettingsChanged:(id)a0;
- (id).cxx_construct;
- (void)rebalanceBilingualInputModeWeights:(void *)a0;
- (void)flushBuffer;
- (id)simulateImplicitInputModeDetectionForPrimaryInputMode:(id)a0;
- (BOOL)bufferIsCompatibleWithContext:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a0 contextLength:(unsigned long long)a1;
- (id)dynamicallyDetectedInputModesForPrimaryInputMode:(id)a0 isSimulation:(BOOL)a1;
- (id)additionalInputModesForUpdatedPrimaryInputMode:(id)a0 withSecondaryInputMode:(id)a1;
- (id)fetchPreferredSecondaryInputMode;
- (void).cxx_destruct;
- (double)lastOfflineAdaptationTimeForApp:(id)a0;

@end
