@class NSString;

@interface WindowController : NSWindowController <ExtendedWindowDelegate> {
    NSString *_multiWindowFrameAutosaveName;
    BOOL _autosaveFrame;
}

@property (readonly, nonatomic) BOOL didRestoreFinalWindowFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)windowDidResize:(id)a0;
- (void)windowDidMove:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)windowDidEndLiveResize:(id)a0;
- (void)_windowDidLoad;
- (BOOL)frameAutosaveEnabled;
- (void)setFrameAutosaveEnabled:(BOOL)a0;
- (BOOL)setMultiWindowFrameAutosaveName:(id)a0;
- (void)setFrameToDefault;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultFrame;
- (void)setFrameWithoutAutosaving:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)frameAutosaveIsAllowed;
- (void)_saveFrameIfAllowed;
- (id)multiWindowFrameAutosaveName;

@end
