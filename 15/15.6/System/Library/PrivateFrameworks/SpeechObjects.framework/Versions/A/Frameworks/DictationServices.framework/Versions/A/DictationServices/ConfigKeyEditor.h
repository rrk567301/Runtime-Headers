@class NSNumber, NSString;
@protocol ConfigEditorDelegate;

@interface ConfigKeyEditor : NSTextView {
    id<ConfigEditorDelegate> mDelegate;
    unsigned long long mModifiers;
    char mOperationModeEnabled;
    unsigned int mSavedHotKeyOperatingMode;
}

@property char allowsHighFunctionKeys;
@property (readonly) NSNumber *key;
@property (readonly) NSString *charCode;
@property (readonly) NSNumber *modifier;
@property char allowKeyWithoutModifiers;

+ (id)stringForVirtualKey:(unsigned long long)a0 characterCode:(unsigned short)a1 modifiers:(unsigned long long)a2;

- (void)dealloc;
- (char)becomeFirstResponder;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (char)performKeyEquivalent:(id)a0;
- (char)resignFirstResponder;
- (char)validateMenuItem:(id)a0;
- (void)_windowDidResignKeyNotification:(id)a0;
- (void)_disableHotKeyOperationMode;
- (void)_restoreHotKeyOperationMode;
- (void)_windowDidBecomeKeyNotification:(id)a0;
- (id)initConfigKeyEditorWithDelegate:(id)a0;

@end
