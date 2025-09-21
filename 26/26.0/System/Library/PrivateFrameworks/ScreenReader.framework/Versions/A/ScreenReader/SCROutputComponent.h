@class NSString, SCRCUserDefaults;

@interface SCROutputComponent : SCROutputThreadedObject {
    NSString *_name;
}

@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (readonly, nonatomic) SCRCUserDefaults *userDefaults;

+ (BOOL)isRunningUnitTests;
+ (void)initialize;
+ (BOOL)coreSynthesizerEnabled;
+ (BOOL)getShouldShortCircuitSpeechSynthesizer;
+ (void)setIsRunningUnitTests:(BOOL)a0;
+ (void)setShouldShortCircuitSpeechSynthesizer:(BOOL)a0;

- (void)setupObservers;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forAttribute:(id)a1;
- (void)_appendModifierStringForKey:(id)a0 toString:(id)a1;
- (id)adjustForSpeechComponentName:(id)a0;
- (id)createModifiersPrefixStringFromAction:(id)a0;
- (void)dispatchNonBlockingActionsAreComplete;
- (id)initWithName:(id)a0 userDefaults:(id)a1;
- (id)localizedNFDString:(id)a0 locale:(id)a1;
- (id)localizedStringForComposedCharacter:(id)a0 prefix:(id)a1;
- (id)localizedStringForComposedCharacterString:(id)a0 prefix:(id)a1 locale:(id)a2;
- (id)localizedStringForComposedCharacterWithLocale:(id)a0 prefix:(id)a1 locale:(id)a2;
- (void)nonBlockingActionsAreComplete;
- (id)objectForAttribute:(id)a0;
- (void)performAction:(id)a0 delegate:(id)a1;
- (int)preflightSequentialSteps:(id)a0 runnerName:(id)a1;
- (void)processEmbeddedVOCommandsInAction:(id)a0;
- (void)replaceVOEmbeddedCommand:(id)a0 inAction:(id)a1;
- (void)replaceVOEmbeddedCommand:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inAction:(id)a2;
- (void)setAudioPositionForBusId:(unsigned int)a0 withAction:(id)a1;

@end
