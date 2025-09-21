@class NSString;

@interface WindowController : NSWindowController <ExtendedWindowDelegate> {
    NSString *_multiWindowFrameAutosaveName;
    char _autosaveFrame;
}

@property (readonly, nonatomic) char didRestoreFinalWindowFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_windowDidLoad;
- (void)windowDidEndLiveResize:(id)a0;
- (void)windowDidMove:(id)a0;
- (void)windowDidResize:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)_saveFrameIfAllowed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultFrame;
- (char)frameAutosaveEnabled;
- (char)frameAutosaveIsAllowed;
- (id)multiWindowFrameAutosaveName;
- (void)setFrameAutosaveEnabled:(char)a0;
- (void)setFrameToDefault;
- (void)setFrameWithoutAutosaving:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)setMultiWindowFrameAutosaveName:(id)a0;

@end
