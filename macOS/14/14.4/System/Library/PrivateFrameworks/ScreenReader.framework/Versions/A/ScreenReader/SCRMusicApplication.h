@class AXFUIElement;

@interface SCRMusicApplication : SCRApplication

@property (retain, nonatomic) AXFUIElement *musicFocusedUIElement;

- (void).cxx_destruct;
- (void)_keyboardFocusDidChange:(id)a0;
- (id)focusedUIElement;
- (BOOL)isMusicApplication;

@end
