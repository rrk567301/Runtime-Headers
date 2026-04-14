@interface ACSHActionPressKeyCode : ACSHAction

@property (nonatomic) BOOL usesMacKeyCode;
@property (nonatomic) unsigned long long usbKeyCode;
@property (nonatomic) unsigned long long macKeyCode;
@property (nonatomic) long long keyboardHWType;
@property (nonatomic) unsigned long long modifiers;
@property (nonatomic) BOOL shouldExecuteSystemFunction;
@property (nonatomic) BOOL shouldNotLockModifierKey;

+ (id)actionWithMacKeyCode:(unsigned long long)a0 keyboardHWType:(long long)a1 modifiers:(unsigned long long)a2;
+ (id)actionWithUSBKeyCode:(unsigned long long)a0 keyboardHWType:(long long)a1 modifiers:(unsigned long long)a2;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)displayString;
- (void)performWithEventSourceData:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (id)paramDescription;
- (BOOL)hasAssociatedSound;
- (BOOL)hasAssociatedSoundForDoubleAction;
- (BOOL)shouldPerformDoubleActionIfPossible;
- (void)performDoubleActionWithEventSourceData:(id)a0;
- (void)performDeactivateWithEventSourceData:(id)a0;
- (void)repeatEndedWithEventSourceData:(id)a0;
- (void)_performDoubleAction:(BOOL)a0 eventSourceData:(id)a1 keyDown:(BOOL)a2;
- (BOOL)_hasAssociatedSoundForDoubleAction:(BOOL)a0;

@end
