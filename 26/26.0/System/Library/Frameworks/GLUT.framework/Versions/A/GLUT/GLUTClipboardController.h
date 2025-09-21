@class NSTextField, NSString, NSScrollView, NSTimer;

@interface GLUTClipboardController : NSWindowController <NSWindowDelegate> {
    NSScrollView *_scrollView;
    NSTextField *_infoText;
    NSTimer *_updateTimer;
    int _lastChangeCount;
    BOOL _firstTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finalize;
- (BOOL)validateMenuItem:(id)a0;
- (void)windowDidLoad;
- (void)windowDidDeminiaturize:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)dealloc;
- (id)init;
- (void)windowWillMiniaturize:(id)a0;
- (void)toggleWindow:(id)a0;
- (void)_checkPasteboard;
- (void)_getTextView:(id *)a0 description:(id *)a1 fromPasteboard:(id)a2 type:(id)a3;
- (void)_clearAutoupdateTimer;
- (void)_getImageView:(id *)a0 description:(id *)a1 fromPasteboard:(id)a2 type:(id)a3;
- (void)_getUnknownView:(id *)a0 description:(id *)a1 fromPasteboard:(id)a2 type:(id)a3;
- (void)_installAutoupdateTimer;
- (BOOL)isClipboardWindowVisible;
- (void)updateClipboardWindow;

@end
