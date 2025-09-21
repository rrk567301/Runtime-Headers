@class NSTextField, NSString, NSColorPanel, NSTimer;

@interface NSColorPanelTextController : NSObject <NSTextFieldDelegate> {
    NSColorPanel *_colorPanel;
    NSTextField *_textControl;
    NSTimer *_textTimer;
    NSString *_lastEditedStringValue;
    id _delegate;
    char _acceptLastEnteredText;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cancel:(id)a0;
- (void)_forceSetLastEditedStringValue:(id)a0;
- (void)textTimerFired:(id)a0;
- (char)acceptLastEnteredText;
- (char)control:(id)a0 didFailToFormatString:(id)a1 errorDescription:(id)a2;
- (char)control:(id)a0 isValidObject:(id)a1;
- (char)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)fieldEditorTextDidChange:(id)a0;
- (id)initWithTextField:(id)a0 colorPanel:(id)a1 delegate:(id)a2;
- (void)setLastEditedStringValue:(id)a0;
- (void)startTextTimer;
- (void)stopTextTimer;

@end
