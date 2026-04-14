@interface CPKWindow : NSPanel {
    id _privateData;
}

- (void)dealloc;
- (void)transform;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)windowDidBecomeKey:(id)a0;
- (void)animationDidEnd:(id)a0;
- (void)cancelOperation:(id)a0;
- (id)_cornerMask;
- (id)_privateStorage;
- (void)_characterViewerButtonClicked:(id)a0;
- (void)_didCancelOperation:(id)a0;
- (void)characterDidSelected:(id)a0;
- (void)windowWillClosed:(id)a0;
- (void)_characterViewerWillOpen:(id)a0;
- (void)_characterViewerDidOpen:(id)a0;
- (void)_prepareDeallocatingParentPopover:(id)a0;
- (void)prepareTransformFromPopover:(BOOL)a0;
- (void)_delayedStartAnimation:(id)a0;
- (void)_detachedWindowClosed:(id)a0;
- (id)initWithParentPopover:(id)a0;
- (void)setLastKeyWindow:(id)a0 bringBack:(BOOL)a1;
- (void)_titlebarClicked:(id)a0;

@end
