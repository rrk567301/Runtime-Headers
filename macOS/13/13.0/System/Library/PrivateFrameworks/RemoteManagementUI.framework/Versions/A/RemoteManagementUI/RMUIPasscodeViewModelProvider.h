@class NSDictionary, RMUIPasscodeViewModel, RMObserverStore;

@interface RMUIPasscodeViewModelProvider : NSObject

@property (copy, nonatomic) NSDictionary *passcodeSettings;
@property (retain, nonatomic) RMUIPasscodeViewModel *passcodeViewModel;
@property (retain, nonatomic) RMObserverStore *observerStore;

+ (void)_applyPasscodeDeclaration:(id)a0 toConglomerate:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_minLength;
- (id)_maxAttempts;
- (void)_updateViewModelsIsManaged:(BOOL)a0 passcodeSettings:(id)a1;
- (void)loadPasscodeSettingsFromConfigurationWithCompletionHandler:(id /* block */)a0;
- (id)_simplePasscodes;
- (id)_maxGracePeriod;
- (id)_maxInactivity;
- (id)_uniquePasscodes;

@end
