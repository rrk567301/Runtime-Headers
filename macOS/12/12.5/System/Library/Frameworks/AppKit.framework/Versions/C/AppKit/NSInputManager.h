@class NSString, NSImage;

@interface NSInputManager : NSObject <NSTextInput> {
    id _currentClient;
    id _server;
    id _bundleObj;
    id _keybindings;
    NSString *_trueName;
    NSString *_connectionName;
    NSString *_hostName;
    NSString *_procToExec;
    NSString *_visibleName;
    NSString *_bundleName;
    NSString *_language;
    NSImage *_image;
    unsigned int _flags;
    NSString *_keyBindingsName;
}

+ (void)initialize;
+ (BOOL)worksWhenModal;
+ (id)currentInputManager;
+ (void)setCurrentInputManager:(id)a0;
+ (void)_terminate:(id)a0;
+ (void)cycleToNextInputLanguage:(id)a0;
+ (void)cycleToNextInputServerInLanguage:(id)a0;
+ (void)_switchToPlatformInput:(id)a0;
+ (id)_inputManagerInNextScript:(id)a0;
+ (id)_nextInputManagerInScript:(id)a0;
+ (void)installInputManagerMenu:(id)a0;

- (void)dealloc;
- (id)description;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isEnabled;
- (id)server;
- (id)image;
- (id)language;
- (void)doCommandBySelector:(SEL)a0;
- (BOOL)worksWhenModal;
- (BOOL)hasMarkedText;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (void)unmarkText;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })markedRange;
- (id)validAttributesForMarkedText;
- (unsigned long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)insertText:(id)a0;
- (void)_terminate;
- (BOOL)_isActivated;
- (void)_loadBundle;
- (void)_activateServer;
- (id)initWithName:(id)a0 host:(id)a1;
- (BOOL)wantsToInterpretAllKeystrokes;
- (BOOL)wantsToDelayTextChangeNotifications;
- (BOOL)wantsToHandleMouseEvents;
- (void)_senderIsInvalid:(id)a0;
- (void)insertText:(id)a0 client:(id)a1;
- (void)doCommandBySelector:(SEL)a0 client:(id)a1;
- (void)markedTextAbandoned:(id)a0;
- (void)markedTextSelectionChanged:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 client:(id)a1;
- (BOOL)_validateBundleSecurity;
- (void)_loadKeyboardBindings;
- (BOOL)_setActivationState:(BOOL)a0;
- (void)getMarkedText:(id *)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)conversationIdentifier;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_keyBindingManager;
- (id)_currentClient;
- (void)_setCurrentClient:(id)a0;
- (void)activateInputManagerFromMenu:(id)a0;
- (id)localizedInputManagerName;
- (BOOL)handleMouseEvent:(id)a0;
- (id)bundleObject;
- (id)_trueName;

@end
