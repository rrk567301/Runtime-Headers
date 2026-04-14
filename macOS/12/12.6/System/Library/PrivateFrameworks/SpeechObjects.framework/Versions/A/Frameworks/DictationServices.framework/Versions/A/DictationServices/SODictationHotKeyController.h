@class NSTextField, NSButton, NSPopUpButton;

@interface SODictationHotKeyController : NSObject <ConfigEditorDelegate> {
    NSPopUpButton *_popUpButton;
    NSTextField *_hotKeyField;
    NSButton *_conflictButton;
    NSTextField *_conflictLabel;
    unsigned long long _previousTag;
    id _clickEventMonitor;
}

+ (BOOL)microphoneKeyAvailable;

- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void)awakeFromNib;
- (void)selectionChanged:(id)a0;
- (void)cancelEditing;
- (void)refreshConflicts;
- (void)_setUpButton;
- (id)customizedHotKeyTitle;
- (BOOL)addMenuItemForEntry:(int)a0;
- (void)removeCustomizedKeyEntry;
- (void)controlTextCancelEditing:(id)a0;
- (BOOL)controlTextShouldAllowClear:(id)a0;
- (void)controlTextDone:(id)a0;
- (void)gotoKbdPref:(id)a0;

@end
