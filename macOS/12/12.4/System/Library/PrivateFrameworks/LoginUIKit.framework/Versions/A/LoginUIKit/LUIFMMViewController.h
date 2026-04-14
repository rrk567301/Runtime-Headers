@class LUIWindowController, NSTimer, NSTextView, LUIPinFieldView, NSDate;

@interface LUIFMMViewController : LUIViewController {
    LUIWindowController *_windowController;
    NSTextView *_promptView;
    LUIPinFieldView *_pinView;
    NSDate *_unlockDate;
    int _promptType;
    NSTimer *_unlockCountDownTimer;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (void)setMessage:(id)a0;
- (id)initWithStyle:(int)a0;
- (void)setWindowController:(id)a0;
- (void)refresh;
- (id)pinView;
- (id)PINString;
- (void)clearPIN;
- (void)_layoutContent;
- (void)_refreshTimerString:(id)a0;
- (void)setPINLength:(int)a0;
- (void)setPINEntryEnabled:(BOOL)a0;
- (void)setPINEntryHidden:(BOOL)a0;
- (void)setPINPromptString:(int)a0 withUnlockDate:(id)a1;
- (id)_promptStringForType:(int)a0;
- (void)_pinEntered:(id)a0;
- (id)_promptFontAttributes:(BOOL)a0;

@end
