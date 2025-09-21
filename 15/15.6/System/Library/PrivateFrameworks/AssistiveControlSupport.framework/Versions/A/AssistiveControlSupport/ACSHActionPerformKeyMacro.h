@interface ACSHActionPerformKeyMacro : ACSHSequencedAction

@property (nonatomic) char shouldNotLockModifierKey;

- (id)init;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;

@end
