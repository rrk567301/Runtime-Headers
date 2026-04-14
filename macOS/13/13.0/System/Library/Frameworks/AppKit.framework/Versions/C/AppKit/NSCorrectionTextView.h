@class NSControl, NSString, NSImage, NSCorrectionPanel, NSButton, NSCorrectionTextFieldContainer;

@interface NSCorrectionTextView : NSView {
    NSCorrectionTextFieldContainer *correctionTextFieldContainer;
    BOOL mouseDown;
    NSControl *controlWithMouseDownEvent;
    NSImage *dismissButtonImage;
    struct CGPoint { double x; double y; } textOrigin;
    NSButton *dismissButton;
}

@property (readonly) NSString *correction;
@property (readonly) BOOL hasSelection;
@property BOOL useDefaultStringAttributes;
@property (readonly) unsigned long long dismissButtonLocation;
@property NSCorrectionPanel *correctionPanel;
@property (readonly) long long correctionPanelType;

- (void)dealloc;
- (id)correction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)setCorrectionAttributes:(id)a0;
- (void)setSelectedCandidate:(unsigned long long)a0;
- (void)_dismissButtonIsPressed;
- (double)_extraWidthForViewHeight:(double)a0;
- (void)_setButtonImage:(id)a0;
- (void)_updateFrame;
- (BOOL)hasSelection;
- (void)setCandidates:(id)a0 andCorrectionPanelType:(long long)a1;
- (BOOL)drawImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDismissButtonLocation:(unsigned long long)a0;
- (BOOL)selectNextCandidate;
- (BOOL)selectPreviousCandidate;
- (id)accessibilityElements;

@end
