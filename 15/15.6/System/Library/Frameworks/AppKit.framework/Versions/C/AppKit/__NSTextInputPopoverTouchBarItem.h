@class NSTextInputContext;

@interface __NSTextInputPopoverTouchBarItem : NSPopoverTouchBarItem {
    char _postsESCOnClose;
}

@property NSTextInputContext *inputContext;
@property char postsESCOnClose;
@property char postESCOnNextClose;

- (char)postsESCOnClose;
- (void)dismissPopover:(id)a0 postESCKeyEvent:(char)a1;
- (char)_allowsInvisiblePopover;
- (void)setPostsESCOnClose:(char)a0;
- (void)showPopover:(id)a0;

@end
