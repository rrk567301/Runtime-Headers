@interface NSRendezvousChildWindowDelegate : NSSemiAutonomousRendezvousWindowDelegate {
    struct CGPoint { double x; double y; } _mostRecentlyKnownOrigin;
}

- (char)_window:(id)a0 shouldCloseForClosingParentPopoverWindowWithTransientContext:(char)a1;
- (void)windowDidMove:(id)a0;
- (id)initWithWindow:(id)a0 andParent:(id)a1;
- (struct CGPoint { double x0; double x1; })originRelevantToParent:(id)a0;

@end
