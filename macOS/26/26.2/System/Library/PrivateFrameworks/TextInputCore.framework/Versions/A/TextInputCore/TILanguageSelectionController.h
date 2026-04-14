@class NSArray, NSMutableDictionary, TIInputMode, NSDictionary, NSMutableArray, TILanguageModelAdaptationContext;
@protocol TIMultilingualPreferenceProviding, TILanguageSelectionControllerDelegate, TILanguageLikelihoodModeling;

@interface TILanguageSelectionController : NSObject {
    struct vector<TITokenID, std::allocator<TITokenID>> { struct TITokenID *__begin_; struct TITokenID *__end_; struct { struct TITokenID *__cap_; } ; } m_buffered_tokens;
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

+ (id)inputModeForLanguageIdentifier:(id)a0;
+ (id)inferAdditionalInputModesForPrimary:(id)a0;
+ (id)inferSecondaryInputModeForPrimary:(id)a0 enabled:(id)a1 isSimulation:(BOOL)a2;
+ (id)inputModesForLanguageIdentifiers:(id)a0;
+ (id)sharedLanguageLikelihoodModel;
+ (void)reportTypedTokens:(const void *)a0 activeInputModes:(id)a1;
+ (id)inferSecondaryInputModeForPrimary:(id)a0 enabled:(id)a1 isSimulation:(BOOL)a2 enabledExcludingPreferredLanguages:(id)a3;
+ (id)multilingualInputModesForInputModes:(id)a0;
+ (id)inferInputModeForLanguage:(id)a0 enabled:(id)a1;

- (id)fetchPreferredAdditionalInputModes;
- (BOOL)bufferIsCompatibleWithContext:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a0 contextLength:(unsigned long long)a1;
- (id)dynamicallyDetectedInputModesForPrimaryInputMode:(id)a0 isSimulation:(BOOL)a1;
- (void)addTokenString:(id)a0 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 context:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a2 contextLength:(unsigned long long)a3;
- (id)fetchUserEnabledInputModes;
- (id)secondaryInputModeForUpdatedPrimaryInputMode:(id)a0;
- (void)flushBuffer;
- (void)appleKeyboardsPreferencesChanged:(id)a0;
- (id)initWithLanguageLikelihoodModel:(id)a0 preferenceProvider:(id)a1;
- (void)appleKeyboardsInternalSettingsChanged:(id)a0;
- (BOOL)didUpdatedInputModesChange:(id)a0;
- (id)fetchPreferredSecondaryInputMode;
- (id)simulateImplicitInputModeDetectionForPrimaryInputMode:(id)a0;
- (void)updateActiveInputModesSuppressingNotification:(BOOL)a0;
- (void).cxx_destruct;
- (float)priorProbabilityForInputMode:(id)a0;
- (id).cxx_construct;
- (void)rebalanceBilingualInputModeWeights:(void *)a0;
- (void)rebalanceMultipleInputModeWeights:(void *)a0;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct { float *x0; } x2; })retreiveExcessInputModeWeightRatiosFromCurrentWeights:(void *)a0;
- (void)removeTokenString:(id)a0 tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 context:(const struct TITokenID { unsigned int x0; unsigned int x1; } *)a2 contextLength:(unsigned long long)a3;
- (BOOL)updateInputModeProbabilities;
- (id)init;
- (double)lastOfflineAdaptationTimeForApp:(id)a0;
- (id)additionalInputModesForUpdatedPrimaryInputMode:(id)a0 withSecondaryInputMode:(id)a1;
- (BOOL)didProbabilityChangeSignificantly;
- (void)feedBufferedTokenStringsToModel;
- (id)fetchUserEnabledInputModesExcludingPreferredLanguages;
- (void)dealloc;

@end
