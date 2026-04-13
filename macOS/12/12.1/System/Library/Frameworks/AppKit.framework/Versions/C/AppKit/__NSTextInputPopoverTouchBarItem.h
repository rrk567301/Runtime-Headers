@class NSTextInputContext;

@interface __NSTextInputPopoverTouchBarItem : NSPopoverTouchBarItem {
    BOOL _postsESCOnClose;
}

@property NSTextInputContext *inputContext;
@property BOOL postsESCOnClose;
@property BOOL postESCOnNextClose;

- (void)showPopover:(id)a0;
- (BOOL)_allowsInvisiblePopover;
- (BOOL)postsESCOnClose;
- (void)setPostsESCOnClose:(BOOL)a0;
- (void)dismissPopover:(id)a0 postESCKeyEvent:(BOOL)a1;

@end
