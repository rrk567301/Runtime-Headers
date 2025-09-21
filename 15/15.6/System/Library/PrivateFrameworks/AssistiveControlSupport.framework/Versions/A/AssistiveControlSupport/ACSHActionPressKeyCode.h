@interface ACSHActionPressKeyCode : ACSHAction

@property (nonatomic) char usesMacKeyCode;
@property (nonatomic) unsigned long long usbKeyCode;
@property (nonatomic) unsigned long long macKeyCode;
@property (nonatomic) long long keyboardHWType;
@property (nonatomic) unsigned long long modifiers;
@property (nonatomic) char shouldExecuteSystemFunction;
@property (nonatomic) char shouldNotLockModifierKey;

+ (id)actionWithMacKeyCode:(unsigned long long)a0 keyboardHWType:(long long)a1 modifiers:(unsigned long long)a2;
+ (id)actionWithUSBKeyCode:(unsigned long long)a0 keyboardHWType:(long long)a1 modifiers:(unsigned long long)a2;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)displayString;
- (void)repeatEndedWithEventSourceData:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (char)_hasAssociatedSoundForDoubleAction:(char)a0;
- (void)_performDoubleAction:(char)a0 eventSourceData:(id)a1 keyDown:(char)a2;
- (char)hasAssociatedSound;
- (char)hasAssociatedSoundForDoubleAction;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)performDeactivateWithEventSourceData:(id)a0;
- (void)performDoubleActionWithEventSourceData:(id)a0;
- (void)performWithEventSourceData:(id)a0;
- (char)shouldPerformDoubleActionIfPossible;

@end
