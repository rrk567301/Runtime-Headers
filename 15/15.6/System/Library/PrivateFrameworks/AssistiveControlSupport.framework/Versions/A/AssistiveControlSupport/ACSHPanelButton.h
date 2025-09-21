@class NSIndexPath, NSArray, NSDictionary, ACSHKeyboardLayout, NSString, ACSHActionPressKeyCode, NSColor;

@interface ACSHPanelButton : ACSHPanelElement {
    double _fontSize;
}

@property (retain, nonatomic) NSDictionary *displayTextKeyDictionary;
@property (retain, nonatomic) NSDictionary *noDeadKeyDisplayTextDictionary;
@property (readonly, nonatomic) ACSHKeyboardLayout *_keyboardLayout;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) char isKeyboardKey;
@property (nonatomic) char shouldExecuteSystemFunction;
@property (readonly, nonatomic) char canInvertImage;
@property (readonly, nonatomic) char allowsDisplayTextChange;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSColor *fontColor;
@property (retain, nonatomic) NSColor *legacyIconTintColor;
@property (nonatomic) char shouldPreserveLegacyImageTintColor;
@property (retain, nonatomic) NSString *localizedDisplayTextKey;
@property (retain, nonatomic) NSString *displayText;
@property (retain, nonatomic) NSString *keyDisplayText;
@property (retain, nonatomic) NSString *secondaryKeyDisplayText;
@property (readonly, nonatomic) char keyIsDeadKey;
@property (retain, nonatomic) NSString *functionSystemActionDisplayText;
@property (retain, nonatomic) NSString *displayImageIdentifier;
@property (nonatomic) double displayImageFontWeight;
@property (nonatomic) char displayImageIdentifierIsTemplate;
@property (retain, nonatomic) NSString *functionSystemActionDisplayImageIdentifier;
@property (readonly, nonatomic) ACSHActionPressKeyCode *pressKeyCodeActionForKeyboardKey;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) unsigned long long modifierMask;
@property (nonatomic) unsigned long long textDisplayLocation;
@property (nonatomic) unsigned long long textDisplaySize;
@property (nonatomic) unsigned long long textDisplayPosition;
@property (nonatomic) unsigned long long imageDisplayLocation;
@property (nonatomic) unsigned long long imageDisplayPosition;
@property (nonatomic) struct CGPoint { double x; double y; } positionIndex;
@property (nonatomic) unsigned long long buttonType;
@property (readonly, nonatomic) char isStickyKey;
@property (nonatomic) char stickyKeyRepeatActivated;
@property (readonly, nonatomic) char shouldNotLockModifierKey;

+ (char)_actionIsKeyboardKeyAction:(id)a0 displayText:(id)a1;
+ (id)allDisplayImageIdentifiersForSystemActions;
+ (id)buttonWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 text:(id)a1 actions:(id)a2;
+ (id)displayImageIdentifierForSystemActionType:(unsigned long long)a0;
+ (id)keysForValuesToObserveForView;
+ (char)shouldShowAlternateTextForModifiers:(unsigned long long)a0 autoShift:(char)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })minimumSize;
- (id)spokenDescription;
- (void)_configureWithPlistDictionary:(id)a0;
- (void)_didUnregisterAssets:(id)a0;
- (void)_updateDisplayTextKeyDictionaryForKeyboardLayout:(id)a0 deadKeyState:(unsigned int)a1 modifiers:(unsigned long long)a2 lockedModifiers:(unsigned long long)a3 autoShift:(char)a4;
- (void)_updateIsKeyboardKeyStatus;
- (void)_updateKeyDisplayTextForModifiers:(unsigned long long)a0 deadKeyState:(unsigned int)a1 autoShift:(char)a2;
- (void)_updateShouldExecuteSystemFunctionForFnKeyDown:(char)a0;
- (void)_updateShouldExecuteSystemFunctionForKeyCodeAction;
- (id)allRequiredResourceIDs;
- (id)descriptionForDepth:(unsigned long long)a0;
- (id)dictionaryForSaving;
- (void)setKeyIsDeadKey:(char)a0;
- (void)toggleStickyKeyRepeatActivated;
- (void)updateForModifiers:(unsigned long long)a0 lockedModifiers:(unsigned long long)a1 deadKeyState:(unsigned int)a2 autoShift:(char)a3;
- (void)updateResourceIdentifiers:(id)a0;
- (void)updateToKeyboardLayout:(id)a0;

@end
