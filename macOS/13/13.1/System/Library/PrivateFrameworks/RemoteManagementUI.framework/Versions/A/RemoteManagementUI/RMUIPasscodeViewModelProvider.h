@class NSDictionary, RMUIPasscodeViewModel, RMObserverStore;

@interface RMUIPasscodeViewModelProvider : NSObject

@property (copy, nonatomic) NSDictionary *passcodeSettings;
@property (retain, nonatomic) RMUIPasscodeViewModel *passcodeViewModel;
@property (retain, nonatomic) RMObserverStore *observerStore;

+ (void)_applyPasscodeDeclaration:(id)a0 toConglomerate:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_minimumLength;
- (void)_updateViewModelsIsManaged:(BOOL)a0 passcodeSettings:(id)a1;
- (void)loadPasscodeSettingsFromConfigurationWithCompletionHandler:(id /* block */)a0;
- (id)_requirePasscode;
- (id)_requireAlphanumericPasscode;
- (id)_requireComplexPasscode;
- (id)_minimumComplexCharacters;
- (id)_maximumFailedAttempts;
- (id)_failedAttemptsResetInMinutes;
- (id)_maximumGracePeriodInMinutes;
- (id)_maximumInactivityInMinutes;
- (id)_maximumPasscodeAgeInDays;
- (id)_passcodeReuseLimit;
- (id)_changeAtNextAuth;

@end
