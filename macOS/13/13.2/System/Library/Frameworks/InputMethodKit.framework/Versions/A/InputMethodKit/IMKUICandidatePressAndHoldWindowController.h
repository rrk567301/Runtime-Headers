@class IMKUISpeechBalloonMask;

@interface IMKUICandidatePressAndHoldWindowController : IMKUICandidateSteppingWindowController

@property (retain, nonatomic) IMKUISpeechBalloonMask *panelMask;

- (id)init;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })preferredWindowSize;
- (id)candidateItemForCandidate:(id)a0 layout:(id)a1;
- (void)updateLayoutTraits;
- (void)updateWindowFrameWithAnimation:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredContentFrameForWindowWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateMaskImageBasedOnPositioning:(id)a0;

@end
