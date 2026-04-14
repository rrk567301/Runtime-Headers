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
+ (void)_terminate:(id)a0;
+ (void)cycleToNextInputLanguage:(id)a0;
+ (void)cycleToNextInputServerInLanguage:(id)a0;
+ (void)_switchToPlatformInput:(id)a0;
+ (id)_inputManagerInNextScript:(id)a0;
+ (id)_nextInputManagerInScript:(id)a0;
+ (void)setCurrentInputManager:(id)a0;
+ (id)currentInputManager;
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
- (void)unmarkText;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })markedRange;
- (BOOL)hasMarkedText;
- (id)validAttributesForMarkedText;
- (unsigned long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)insertText:(id)a0;
- (BOOL)handleMouseEvent:(id)a0;
- (void)_terminate;
- (void)_senderIsInvalid:(id)a0;
- (void)insertText:(id)a0 client:(id)a1;
- (void)doCommandBySelector:(SEL)a0 client:(id)a1;
- (void)markedTextAbandoned:(id)a0;
- (void)markedTextSelectionChanged:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 client:(id)a1;
- (BOOL)wantsToInterpretAllKeystrokes;
- (BOOL)wantsToHandleMouseEvents;
- (BOOL)wantsToDelayTextChangeNotifications;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (long long)conversationIdentifier;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_setActivationState:(BOOL)a0;
- (BOOL)_isActivated;
- (id)initWithName:(id)a0 host:(id)a1;
- (void)_activateServer;
- (BOOL)_validateBundleSecurity;
- (void)_loadBundle;
- (void)_loadKeyboardBindings;
- (id)_keyBindingManager;
- (id)_currentClient;
- (void)_setCurrentClient:(id)a0;
- (void)activateInputManagerFromMenu:(id)a0;
- (id)localizedInputManagerName;
- (id)bundleObject;
- (id)_trueName;
- (void)getMarkedText:(id *)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;

@end
